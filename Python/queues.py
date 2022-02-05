class queb1():
    q=[]
    s=int(input("Enter the size of the queue : "))

class quop(queb1):
    size=0
    f=0
    r=0
    def __init__(self):
        self.size=queb1.s
        print(self.size)

    def addele(self,n):
        if(self.r==self.size):
            print("Queue is Full...!")
        else:
            queb1.q.append(n)
            self.r+=1

    def remele(self):
        if(self.f==self.r):
            print("Queue is Empty..!")
        else:
            print("The Deleted element is :",queb1.q[self.f])
            self.f+=1

    def display(self):
        print("The current queue is : ")
        for i in range(self.f,self.r,1):
            print(queb1.q[i],end=" ")

ob1=queb1()
ob2=quop()
while(True):
    c=int(input("\n \n Press 1 to insert \n Press 2 to Delete \n Press 3 to Display Current Queue : "))
    if(c==1):
        n=int(input("Enter the number to insert : "))
        ob2.addele(n)
    elif(c==2):
        ob2.remele()
    elif(c==3):
        ob2.display()
    else:
        print("Wrong Input...!!!")