public class DataType {
    public static void main(String[] args) {
        
        //primitive data types
        
        //Numeric type
        //integer values
        //byte has size of 1 byte
        byte byteVar1 = 20, byteVar2 = -10;
        System.out.println("Sum of two bytes " + byteVar1 + " and " + byteVar2 + " is " + (byteVar1+byteVar2) );

        //short has size of 2 bytes
        short shortVar1 = 200, shortVar2 = -110;
        System.out.println("Sum of two shorts " + shortVar1 + " and " + shortVar2 + " is " + (shortVar1+shortVar2) );

        //int has size of 4 bytes
        int intVar1 = 20213, intVar2 = -1233123;
        System.out.println("Sum of two integers " + intVar1 + " and " + intVar2 + " is " + (intVar1+intVar2) );
        
        //long has size of 8 bytes
        long longVar1 = 20123112l, longVar2 = -10761007l;
        System.out.println("Sum of two longs " + longVar1 + " and " + longVar2 + " is " + (longVar1+longVar2) );

        //floating values
        //float has size of 4 bytes
        float floatVar1 = 20.1234f, floatVar2 = -10.5678f;
        System.out.println("Sum of two floates " + floatVar1 + " and " + floatVar2 + " is " + (floatVar1+floatVar2) );
        
        //double has size of 8  bytes, generally default for floating values
        double doubleVar1 = 2012.1236571232, doubleVar2 = -10.721637867668;
        System.out.println("Sum of two doubles " + doubleVar1 + " and " + doubleVar2 + " is " + (doubleVar1+doubleVar2) );
        
        //Character type
        //char has size of 2 bytes
        char charVar1 = 'A', charVar2 ='$';
        System.out.println("Character1 is: "+charVar1+" Character2 is: " +charVar2);
        //Boolean type
        //boolean has size of 1 bit
        boolean boolVar1 = true, boolVar2 = false;
        System.out.println("true and flase is: " + (boolVar1&&boolVar2));

        //Non primitive data types
        //String
        String str1 = "Hello",str2="World";
        System.out.println(str1 + " " + str2);
        
        //array
        int[] arr1 = {1,2,3,4,5};
        int[] arr2 = {6,7,8,9,10,11,12};
        System.out.println("The length of first array is: " + arr1.length);
        System.out.println("The length of second array is: " + arr2.length);
    }
}
