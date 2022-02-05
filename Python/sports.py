class Student:
    ca1M=0
    ca2M=0
    ca3M=0
    ca4M=0
    pca1M=0
    pca2M=0
    ext=0
    def __init__(self):
        self.name=input("Enter Name :")
        self.dept=input("Enter Department :")
        self.roll=input("Enter Roll :")

    def ca1Mark(self):
        math=int(input("Enter Math marks in CA1 :"))
        prog=int(input("Enter Programming marks in CA1 :"))
        phy=int(input("Enter Physics Marks in CA1 :"))
        self.ca1M=math+prog+phy

    def ca2Mark(self):
        math=int(input("Enter Math marks in CA2 :"))
        prog=int(input("Enter Programming marks in CA2 :"))
        phy=int(input("Enter Physics Marks in CA2 :"))
        self.ca2M=math+prog+phy

    def ca3Mark(self):
        math=int(input("Enter Math marks in CA3 :"))
        prog=int(input("Enter Programming marks in CA3 :"))
        phy=int(input("Enter Physics Marks in CA3 :"))
        self.ca3M=math+prog+phy

    def ca4Mark(self):
        math=int(input("Enter Math marks in CA4 :"))
        prog=int(input("Enter Programming marks in CA4 :"))
        phy=int(input("Enter Physics Marks in CA4 :"))
        self.ca4M=math+prog+phy

    def pca1(self):
        python=int(input("Enter Python Marks in PCA1 :"))
        dsa=int(input("Enter DSA Marks in PCA1 :"))
        co=int(input("Enter CO Marks in PCA1 :"))
        self.pca1M=python+dsa+co

    def pca2(self):
        python=int(input("Enter Python Marks in PCA2 :"))
        dsa=int(input("Enter DSA Marks in PCA2 :"))
        co=int(input("Enter CO Marks in PCA2 :"))
        self.pca2M=python+dsa+co

    def external(self):
        math=int(input("Enter Math marks in External:"))
        prog=int(input("Enter Programming marks in External:"))
        phy=int(input("Enter Physics marks in External:"))
        self.ext=math+prog+phy

    def average(self):
        avgCa=(self.ca1M+self.ca2M+self.ca3M+self.ca4M)*100/300
        avgPCa=(self.pca1M+self.pca2M)*100/240
        avgExt=self.ext*100/210
        print("Name: ",end=" ")
        print(self.name)
        print("Dept: ",end=" ")
        print(self.dept)
        print("Roll: ",end=" ")
        print(self.roll)
        print("Your Average in CA is : ",end=" ")
        print(round(avgCa,2))
        print("Your Average in PCA is : ",end=" ")
        print(round(avgPCa,2))
        print("Your Average in External is : ",end=" ")
        print(round(avgExt,2))
        totAvg=((avgCa*300)+(avgPCa*240)+(avgExt*210))/750
        print("Your Total Average is :",end=" ")
        print(round(totAvg,2))

st=Student()
st.ca1Mark()
st.ca2Mark()
st.ca3Mark()
st.ca4Mark()
st.pca1()
st.pca2()
st.external()
st.average()