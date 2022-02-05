''' count number of vowels in a string using class and functions. Take input from user.'''
class VowelCheck:
    def Input(self):
        self.str=input("Enter the string or sentence: ")
    
    def Output(self):
        vowel=0
        for i in self.str:
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
                vowel=vowel+1
        print("The no of vowel in the string or sentence is: ",vowel)

str=VowelCheck()
str.Input()
str.Output()