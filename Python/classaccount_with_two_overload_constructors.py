class Account:

    def __init__(self):
        self.nm = input("Enter Name :")
        self.acnt_no = input("Account No :")
        self.ini_amt = int(input("Initial Amount :"))
        self.addrs = input("Enter Address :")
        self.ac_typ = "savings"
        self.cur = self.ini_amt

    def deposit(self):
        dep = int(input("Enter Amount to be Deposited :"))
        self.cur += dep

    def withdrawl(self):
        withd = int(input("Enter Amount to be Withdrawn :"))
        self.cur -= withd

    def getBalance(self):
        print(f"NAME: {self.nm}")
        print(f"ACCOUNT NO: {self.acnt_no}")
        print(f"ADDRESS: {self.addrs}")
        print(f"TYPE OF ACCOUNT: SAVINGS")
        print(f"INITIAL AMOUNT: {self.ini_amt}")
        print(f"NET AMOUNT: {self.cur}")


myacnt = Account()


ans = int(input("Enter 1 to Deposit,2 to Withdraw,3 to Display Balance : "))


if ans == 1:
    myacnt.deposit()
    myacnt.getBalance()
elif ans == 2:
    myacnt.withdrawl()
    myacnt.getBalance()
elif ans == 3:
    myacnt.getBalance()