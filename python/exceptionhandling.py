#handling zero division error

a = int( input("a:"))
b = int( input("b:"))

try:
    result = a/b
except ZeroDivisionError:
    result= None
    print("Error: Cannot divide by Zero.")
finally:
    print("Division is completed: ",result)