class Stack:
    def __init__(self):
        self.stack=[]
        self.top=-1
        self.size = int(input("Enter the size:"))
    def push(self):
        if self.top == self.size - 1:
            print("Stack is full \n OVERFLOW")
        else:
            ele = int(input("Enter the Stack element:"))
            self.top = self.top + 1
            self.stack.insert(self.top, ele)

    def pop(self):
        if self.top == -1:
            print("UnderFlow Condition!")
        else:
            print(f"Element popped {self.stack[self.top]}")
            self.stack.pop()
            self.top = self.top - 1

    def display(self):
        print()

        if self.top == -1:
            print("empty")
        else:
            print("the Stack elements are:", end="")
            for i in self.stack:
                print(i,end=" ")

class Stack1(Stack):
    def __init__(self):
        super(Stack1, self).__init__()
        print("Using Inheritance stack operation")
        while (1):
            self.opt = int(input("\nEnter\n1 for Push \n2 for Pop \n3 to Display \n4 to Exit  :"))
            if self.opt == 1:
                self.push()
            elif self.opt == 2:
                self.pop()
            elif self.opt == 3:
                self.display()
            elif self.opt == 4:
                break


stackobj=Stack1()
