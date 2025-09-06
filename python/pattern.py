n=int(input( "enter n:"))
for _ in range(n):
    print("*****")
    #or
    print("*"* 5)
for _ in range(n): #rows
    for i in range(1,n+1): #columns
        print(i ,end ="")
    print()   

for i in range(1,n+1): #rows
    for j in range(1,i+1): #columns
        print(j ,end ="")
    print()        
for i in range(1 ,n+1): #rows
    for j in range(1,n-i+1): #columns
        print(" " ,end ="")        
    for j in range(1,2*i):
        print(j ,end ="")
    print()    
for i in range(1 ,n+1): #rows
    print(" " * (n-i) , end="")
    for j in range(1,2*i): #columns
        print(j ,end ="")
    print()        
       