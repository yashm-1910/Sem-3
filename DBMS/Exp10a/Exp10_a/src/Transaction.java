//package com.main;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;

public class Transaction {
	public static Hashtable<String, String> transactionDetails = new Hashtable<>();
	public static Hashtable<String, List<String>> transactionItemsLocked = new Hashtable<>();
	public static Hashtable<String, List<String>> queuedOperations = new Hashtable<>();

	public static void beginTransaction(String operation) {
		String key = String.valueOf(operation.charAt(1));
		int timeStamp = (int) (System.currentTimeMillis() / 1000);
		String values = "ACTIVE" + "," + timeStamp;
		transactionDetails.put(key, values);
		Project.writeToFile(":: TRANSACTION STARTED");

	}

	public static void endTransaction(String operation) {
		List<String> releasedItems = new ArrayList<String>();
		List<String> lockedItems = new ArrayList<String>();
		String key = String.valueOf(operation.charAt(1));
		String value = transactionDetails.get(key);
		String state = value.split(",")[0];
		releasedItems = transactionItemsLocked.get(key);
		if (state.equals("ACTIVE")) {
			transactionDetails.put(key, "COMMITTED" + "," + value.split(",")[1]);
			Lock.releaseLocks(releasedItems, key);
			// write to output file
			Project.writeToFile("\r\n "+operation+":: TRANSACTION" + key + " COMMITTED");
		} else if (state.equals("BLOCKED")) {
			List<String> opList = new ArrayList<String>();
			opList = Transaction.queuedOperations.get(key);
			if (!queuedOperations.contains(operation))
				opList.add(operation);
			queuedOperations.put(key, opList);
			// write to output file
			Project.writeToFile(" :: TRANSACTION STATE BLOCKED and the operation is added to the waitingTransactions");
		} else if (state.equals("ABORT")) {
			// write to output file
			Project.writeToFile(":: TRANSACTION ABORTED");
		}
	}

	public static void writeTransaction(String operation) {
		List<String> holdingTrans = new ArrayList<String>();
		List<String> itemsList = new ArrayList<String>();
		String key = String.valueOf(operation.charAt(1));
		String dataitem = String.valueOf(operation.charAt(2));
		String value = transactionDetails.get(key);
		String state = value.split(",")[0];
		if (state.equals("ACTIVE")) {
			if (Lock.dataItem.get(dataitem) == null) {
				holdingTrans.add(key);
				if (transactionItemsLocked != null)
					itemsList = transactionItemsLocked.get(key);
				if (!itemsList.contains(dataitem))
					itemsList.add(dataitem);
				transactionItemsLocked.put(key, itemsList);
				Lock.dataItem.put(dataitem, "WRITE");
				Project.writeToFile(" :: WRITE LOCK ON " + dataitem);
				Lock.holdingTransactions.put(dataitem, holdingTrans);
			} else {
				holdingTrans = Lock.holdingTransactions.get(dataitem);
				if (Lock.dataItem.get(dataitem).equals("READ")) {
					if (holdingTrans.size() == 1) {
						if (holdingTrans.get(0).equals(key)) {
							// write to output file
							// lock is upgraded
							Lock.dataItem.put(dataitem, "WRITE");
							Project.writeToFile(" \r\n "+operation+":: UPGRADED TO WRITE LOCK ON " + dataitem);
						}
					} else {
						Lock.waitDie(key, holdingTrans, operation);
					}
				} else {
					if (holdingTrans.get(0).equals(key)) {
						// write to output file
					} else {
						Lock.waitDie(key, holdingTrans, operation);
					}
				}
			}
		} else if (state.equals("BLOCKED")) {
			List<String> opList = new ArrayList<String>();
			opList.add(operation);
			queuedOperations.put(key, opList);
			// write to output file
			Project.writeToFile(":: TRASACTION STATE BLOCKED");
		} else if (state.equals("ABORT")) {
			// write to output file
			Project.writeToFile(":: TRANSACTION ABORTED");
		}
	}

	public static void readTransaction(String operation) {

		List<String> holdingTrans = new ArrayList<String>();
		List<String> itemsList = new ArrayList<String>();
		String key = String.valueOf(operation.charAt(1));
		String dataitem = String.valueOf(operation.charAt(2));
		String value = transactionDetails.get(key);
		String state = value.split(",")[0];
		if (state.equals("ACTIVE")) {
			if (Lock.dataItem.get(dataitem) == null) {
				holdingTrans.add(key);
				if (transactionItemsLocked.get(key) != null)
					itemsList = transactionItemsLocked.get(key);
				if (!itemsList.contains(dataitem))
					itemsList.add(dataitem);
				transactionItemsLocked.put(key, itemsList);
				Lock.dataItem.put(dataitem, "READ");
				Project.writeToFile(":: READ LOCK ON " + dataitem + " BY TRANSACTION " + key);
				Lock.holdingTransactions.put(dataitem, holdingTrans);

			} else {
				holdingTrans = Lock.holdingTransactions.get(dataitem);
				if (Lock.dataItem.get(dataitem).equals("READ")) {
					if (holdingTrans.contains(key)) {
						Project.writeToFile(" READ DATAITEM " + dataitem);
						// write to output file
					} else {
						List<String> trans = new ArrayList<String>();
						trans = Lock.holdingTransactions.get(dataitem);
						trans.add(key);
						Lock.holdingTransactions.put(dataitem, trans);
						if (transactionItemsLocked.get(key) != null)
							itemsList = transactionItemsLocked.get(key);
						if (!itemsList.contains(dataitem))
							itemsList.add(dataitem);
						Project.writeToFile(" :: SHARED LOCK ON " + dataitem + " BY TRANSACTION " + trans.toString());
						transactionItemsLocked.put(key, itemsList);
					}
				} else {
					Lock.waitDie(key, holdingTrans, operation);
				}
			}
		} else if (state.equals("ABORT")) {
			// write to output file
			Project.writeToFile("Tansaction aborted");
		} else if (state.equals("BLOCKED")) {
			List<String> opList = new ArrayList<String>();
			opList.add(operation);
			queuedOperations.put(key, opList);
			// write to output file
			Project.writeToFile(":: TRANSACTION STATE BLOCKED ");
		}
	}
}
