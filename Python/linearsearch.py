def linearsearch(arr):
    cnt=0
    pos=[]
    key=int(input("Enter the Element to be searched for :"))
    for i in range(0, len(arr)):
        if arr[i]==key:
            cnt+=1
            pos.append(i)
    if cnt == 0:
        print(f"{key} not found")
    else:
        print(f"{key} found for {cnt} times at {pos}")

n=10
arr=[]
while(n!=0):
    arr.append(int(input("Enter Element :")))
    n=n-1
print(arr)
linearsearch(arr)
