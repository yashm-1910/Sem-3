//package com.main;

import java.util.List;
import java.util.ArrayList;
import java.util.Hashtable;

public class Lock {
	public static Hashtable<String, String> dataItem = new Hashtable<>();
	public static Hashtable<String, List<String>> waitingTransactions = new Hashtable<>();
	public static Hashtable<String, List<String>> holdingTransactions = new Hashtable<>();

	public static void waitDie(String key, List<String> holdingTrans, String operation) {
		// String dataitem = String.valueOf(operation.charAt(2));
		String value1 = Transaction.transactionDetails.get(key);
		String value2 = null;
		String TimeStamp1 = value1.split(",")[1];
		for (int i = 1; i <= holdingTrans.size(); i++) {
			if (Transaction.transactionDetails.get(key).split(",")[0].equals("ACTIVE")
					|| Transaction.transactionDetails.get(key).split(",")[0].equals("BLOCKED")) {
				value2 = Transaction.transactionDetails.get(holdingTrans.get(i - 1));
				String TimeStamp2 = value2.split(",")[1];
				if (Integer.parseInt(TimeStamp1) <= Integer.parseInt(TimeStamp2)) {
					wait(key, operation);
				} else {
					abort(key, operation);
				}
			}
		}

	}

	private static void abort(String key, String operation) {
		String dataitem = String.valueOf(operation.charAt(2));
		List<String> releasedItems = new ArrayList<String>();
		List<String> removeWaiting = new ArrayList<String>();
		String TS = Transaction.transactionDetails.get(key).split(",")[1];
		Transaction.transactionDetails.put(key, "ABORT" + "," + TS);
		Project.writeToFile("TRANSACTION" + key + " IS ABORTED and checks if it holds any locks");
		/*
		 * if (waitingTransactions.get(dataitem).contains(key)) { removeWaiting
		 * = waitingTransactions.get(dataItem); removeWaiting.remove(key);
		 * waitingTransactions.put(dataitem, removeWaiting);
		 * Project.writeToFile(" :: The aborted transaction" + key +
		 * " if present, is removed from WaitingList"); }
		 */
		releasedItems = Transaction.transactionItemsLocked.get(key);
		if (releasedItems != null)
			releaseLocks(releasedItems, key);

	}

	// write to output file

	public static void releaseLocks(List<String> releasedItems, String key) {
		List<String> holdingTrans = new ArrayList<String>();
		Transaction.transactionItemsLocked.remove(key);
		for (int i = 0; i < releasedItems.size(); i++) {
			if (dataItem.get(releasedItems.get(i)).equals("WRITE")) {
				String item = releasedItems.get(i);
				dataItem.remove(item);
				holdingTransactions.remove(item);
				allotToWaiting(key, item);
			} else if (dataItem.get(releasedItems.get(i)).equals("READ")) {
				String dataitem = releasedItems.get(i);
				if (holdingTransactions.get(dataitem).size() > 1) {
					holdingTrans = holdingTransactions.get(dataitem);
					holdingTrans.remove(holdingTrans.indexOf(key));
					holdingTransactions.put(dataitem, holdingTrans);
					if (holdingTransactions.get(dataitem).size() == 1) {
						allotToWaiting(key, dataitem);
					}
				} else {
					dataItem.remove(dataitem);
					holdingTransactions.remove(dataitem);
					allotToWaiting(key, dataitem);
				}
			}
		}
	}

	private static void wait(String key, String operation) {
		String dataitem = String.valueOf(operation.charAt(2));
		List<String> waitingTans = new ArrayList<String>();
		List<String> queuedOperations = new ArrayList<String>();
		String TS = Transaction.transactionDetails.get(key).split(",")[1];
		Transaction.transactionDetails.put(key, "BLOCKED" + "," + TS);
		Project.writeToFile("TRANSACTION" + key + " IS BLOCKED");
		if (waitingTransactions.get(dataitem) != null)
			waitingTans = waitingTransactions.get(dataitem);
		if (!waitingTans.contains(key))
			waitingTans.add(key);
		waitingTransactions.put(dataitem, waitingTans);
		if (Transaction.queuedOperations.get(key) != null)
			queuedOperations = Transaction.queuedOperations.get(key);
		if (!queuedOperations.contains(operation)) {
			queuedOperations.add(operation);
			Project.writeToFile(" and the operation is added to the waitingTransactions ");
		}

		Transaction.queuedOperations.put(key, queuedOperations);
		// write to output file
	}

	public static void allotToWaiting(String key, String dataitem) {
		if (holdingTransactions.containsKey(dataitem)) {
			if (holdingTransactions.get(dataitem).size() == 1) {
				if (waitingTransactions.get(dataitem).contains(holdingTransactions.get(dataitem).get(0))) {
					String nextTransaction = holdingTransactions.get(dataitem).get(0);
					waitingTransactions.get(dataitem)
							.remove(holdingTransactions.get(dataitem).indexOf(nextTransaction));
					List<String> toDoOp = new ArrayList<String>();
					toDoOp = Transaction.queuedOperations.get(nextTransaction);
					String TS = Transaction.transactionDetails.get(nextTransaction).split(",")[1];
					Transaction.transactionDetails.put(nextTransaction, "ACTIVE" + "," + TS);
					Project.writeToFile("TRANSACTION" + nextTransaction + " IS ACTIVE");
					for (String a : toDoOp) {
						Project.execute(a);
					}
				}

			}
		} else {
			List<String> waitingTrans = new ArrayList<String>();
			if (waitingTransactions.containsKey(dataitem)) {
				waitingTrans = waitingTransactions.get(dataitem);
				if (waitingTrans.size() > 0) {
					if (waitingTransactions.get(dataitem).get(0) != null) {
						String nextTransaction = waitingTransactions.get(dataitem).get(0);
						waitingTransactions.get(dataitem)
								.remove(holdingTransactions.get(dataitem).indexOf(nextTransaction));
						List<String> toDoOp = new ArrayList<String>();
						toDoOp = Transaction.queuedOperations.get(nextTransaction);
						String TS = Transaction.transactionDetails.get(nextTransaction).split(",")[1];
						Transaction.transactionDetails.put(nextTransaction, "ACTIVE" + "," + TS);
						Project.writeToFile("TRANSACTION" + nextTransaction + " IS ACTIVE");
						for (String a : toDoOp) {
							Project.execute(a);
						}
					}
				}
			}

		}
	}

}
