package p1;
import java.util.Scanner;
abstract class SavingsAccount {
    double acc_bal;
    int acc_no;
    String name;
    String address;
    abstract void Withdrawal();
    abstract void Deposit();
    public double Input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name : ");
        name = sc.nextLine();
        System.out.println("Enter Address : ");
        address = sc.nextLine();
        System.out.println("Enter Account Number : ");
        acc_no = sc.nextInt();
        System.out.println("Enter Current Balance : ");
        acc_bal = sc.nextDouble();
        return acc_bal;
    }

    public void Display(){
        System.out.println("The name is : "+name);
        System.out.println("Address is : "+address);
        System.out.println("Account Number is : "+acc_no);
        System.out.println("Account Balance is : "+acc_bal);
    }
}
public class Accounts extends SavingsAccount{
    double interest_rate, amt;
    public void Cal_amt(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rate of interest : ");
        interest_rate = sc.nextInt();
        acc_bal = acc_bal+(acc_bal*(interest_rate/100));
        System.out.println("Savings account balance with interest is : "+acc_bal);
    }
    public void Withdrawal(){
        double withdraw_amt;
        amt = super.Input();
        acc_bal = amt;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the withdrawal amt : ");
        withdraw_amt = sc.nextInt();
        acc_bal = acc_bal - withdraw_amt;
        System.out.println("After withdrawal balance is : "+acc_bal);

    }
    public void Deposit(){
        double deposit_amt;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the deposit amount : ");
        deposit_amt = sc.nextInt();
        acc_bal = acc_bal+deposit_amt;
        System.out.println("The balance after deposit is :"+acc_bal);

    }
}
