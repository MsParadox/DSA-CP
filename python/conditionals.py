#if else
x = 6
if x==5 :
   print("Mohit")
else :
   print("Rohit")   

#elif (else if)
cp = 15
sp = 10
if cp>sp :
   print("loss:",cp-sp)
elif sp>cp:
   print("profit",sp-cp)      
else:
   print("none")   

#match case
w = 3
match w :
   case 1:
      print("case1")
   case 2:
      print("case2")
   case _: 
      print("default")     

#ternary operator
p = 11
print("yes" if p%2==0 else "No")      
