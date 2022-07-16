package com.aryadeep;

public class InRange_SametwoDigit {
    public static void main(String[] args) {
        int i,a,b,c;
        for (i = 100; i <= 200 ; i++) {
            a = i % 10;
            b = (i/10)%10;
            c = (i/100);
            if(a==b || a==c || b==c){
                System.out.print(i+" ");
            }
        }
    }
}
