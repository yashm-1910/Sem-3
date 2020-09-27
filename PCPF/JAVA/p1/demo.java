package p1;

public class demo{
    public void m1(){
        System.out.println("m1 of c1");
    }
    public static void main(String[] args) {
        demo obj = new demo();
        obj.m1();
    }
}
//to compile a package enter javac -d . file.java
//this code was to demonstrate encapsulation, if class demo is private, protected or default then it cannot be used in p2