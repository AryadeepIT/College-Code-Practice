class Employee:
    net_salary=0
    def __init__(self):
        self.emp_id=input("Enter id:"),
        self.emp_name=input("Enter name:"),
        self.emp_phone=input("Enter phone no:"),
        self.emp_bs=int(input("Enter basic salary:"))
        self.net_salary=0
    def display(self):
        print(f"Employee id:{self.emp_id[0]} ")
        print(f"Employee name:{self.emp_name[0]} ")
        print(f"Employee phone:{self.emp_phone[0]} ")
        print(f"Employee basic salary:{self.emp_bs} ")
        print(f"Employee net salary:{self.net_salary} ")

    def  net_salary_calc(self):
        self.net_salary+=self.emp_bs+(0.1*self.emp_bs)+(0.5*self.emp_bs)

emp_list=[]
ask='y'
#input

while(ask=='y'):
    emp_list.append(Employee())
    ask=input("want to add more? y/n  :").lower()

#display

for obj in emp_list:
    obj.net_salary_calc()
    obj.display()
