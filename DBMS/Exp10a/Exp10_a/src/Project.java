//package com.main;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Writer;

public class Project {

	public static void main(String args[]) {
		try {
			File files = new File("D:\\College\\DBMS\\Exp10a\\Exp10_a\\src\\input.txt");
			FileInputStream filestream;
			filestream = new FileInputStream(files);
			BufferedReader br = new BufferedReader(new InputStreamReader(filestream));
			String line = null;
			while ((line = br.readLine()) != null) { //reads line by line
				line = line.replaceAll("\\s+","");
				String nextToken = line;
				writeToFile("\r\n");
				writeToFile(nextToken);
				nextToken = nextToken.replaceAll("\\(", "");
				nextToken = nextToken.replaceAll("\\)", "");
				System.out.println(nextToken);
				execute(nextToken);
				//String nextLine = input.nextLine();
				//System.out.println(nextLine);
			}
			br.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	public static void writeToFile(String input) {
		try {
			Writer writer;
			writer = new BufferedWriter(new FileWriter("D:\\College\\DBMS\\Exp10a\\Exp10_a\\src\\output.txt",true));
			writer.append(input);
			writer.close();
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

	public static void execute(String nextToken) {

		if (nextToken.charAt(0) == 'b') {
			Transaction.beginTransaction(nextToken);
		} else if (nextToken.charAt(0) == 'r') {
			Transaction.readTransaction(nextToken);
		} else if (nextToken.charAt(0) == 'w') {
			Transaction.writeTransaction(nextToken);
		} else if (nextToken.charAt(0) == 'e') {
			Transaction.endTransaction(nextToken);
		}
	}
}
