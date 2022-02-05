class details:
    '''Displaying the name and age of the person'''
    def entername(self):
        self.name=input()
    def enterage(self):
        self.age=input()
    def printname(self):
        print(self.name)
    def printage(self):
        print(self.age)

show=details()
print("Enter the name of the person:")
show.entername()
print("Enter the age of the person:")
show.enterage()
print("The name of the person is:")
show.printname()
print("The age of the person is:")
show.printage()