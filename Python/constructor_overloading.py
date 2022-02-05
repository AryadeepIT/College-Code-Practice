class Stack:
    stack=[]
    def _init_(self,arr):
        for i in arr:
            self.stack.append(i)

    def push(self,x):
        self.stack.append(x)

    def pop(self):
        if(len(self.stack)==0):
            print("Stack Underflow")
        else:
            self.stack.pop()

    def print(self):
        print("The elemets in the stack are:")
        for i in self.stack:
            print(i,end=" ")
        print("")

arr=[]
n=int(input("Enter the size of the stack:"))
print("Enter the elements:")

for i in range(0,n):
    x=input()
    arr.append(x)

St=Stack(arr)
St.pop()
St.push(6)
St.print()