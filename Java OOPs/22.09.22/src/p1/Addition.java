package p1;

import java.util.Scanner;

abstract class Addition1 {
    abstract void sum();
}
public class Addition extends Addition1{
    public void sum(){
        int i=0,j,sum=0,x;
        String str1,str2,str3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of digits of number: ");
        x=sc.nextInt();
        System.out.println("Enter the number: ");
        int n= sc.nextInt();
        int s[]=new int[x];
        while(n>0){
            s[i]=n%10;
            n=n/10;
            i=i+1;
        }
        for(j=(i-1);j>0;j--){
            str1=Integer.toString(s[j]);
            str2=Integer.toString(s[j-1]);
            str3=str1+str2;
            sum+=Integer.parseInt(str3);
        }
        System.out.println("The sum is "+sum);
    }
}

