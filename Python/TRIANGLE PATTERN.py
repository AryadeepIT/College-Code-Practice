n=int(input("Enter range untill which series is to be printed:"))
k = n - 1
num=1
for i in range(0, n):
    for j in range(0, k):
        print(end="  ")
    k = k - 1

    for j in range(0, i + 1):

        print(num," ", end=" ")
        num=num+1

    print("\r")
