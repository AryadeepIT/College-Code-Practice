str = input("Enter the String :") 
print("The original string  is : ",str)   
reverse_String = ""   
count = len(str) 
while count > 0:   
    reverse_String += str[ count - 1 ] 
    count = count - 1 
print ("The reversed string using a while loop is : ",reverse_String)