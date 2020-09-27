package p2;

import p1.*;
class c2 {
    public void m2(){
        System.out.println("m2 of c2");
    }
    public static void main(String[] args) {
        demo obj = new demo();
        obj.m1();
        c2 obj2 = new c2();
        obj2.m2();
    }
}
