def factorial(n):
    #base case
    if n==0: return 1

    #recursive case
    ans =n*factorial(n-1)

    return ans
n =int(input("en:"))
print(factorial(n))

def printNtoOne(n):
    if n==0: return 
    print(n)
    printNtoOne(n-1)
    
printNtoOne(n)

def sum1toN(n):
    #base case
    if n==1: return 1

    #recursive case
    ans =n+sum1toN(n-1)

    return ans
print(sum1toN(n))

def aToPowerb(a,b):
   if b==0: return 1

   ans=a*aToPowerb(a,b-1)
   return ans
print(aToPowerb(3,4))

def fibonacci(n):

    if n==1: return 0
    elif n==2: return 1
    else: return(fibonacci(n-1)+fibonacci(n-2))    
for i in range(1,n+1):
    print(fibonacci(i))
