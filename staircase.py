#first read the Readme file to have more clarity.
def staircase(n):
    for i in range(1,n+1):
        for j in range(n,0,-1):
            if j>i :
                print(" ",end="")
            else:
                print("#",end="")
        print()

n = int(input("Enter the size of staircase(n) : "))
staircase(n)