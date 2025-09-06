def hello():
    print("Hello")
hello()    

def add(x,y):
    sum =x+y
    return sum
print(add(3,5))

#variable length argument/ arbitary argument
def addAllNumbers (*args):
    sum =0
    for i in args:
        sum+=i
    return sum     
print(addAllNumbers(1,2,3,4,5))

def studentinfo(**kwargs):
    for x,y in kwargs.items():
        print(x,"is",y)
studentinfo(name= "mohit",age =18,city ="Gwalior")

#nested functions
def outer_function():
    x=1
    def inner_function():
        y =2
        result = x+y
        return result
    
    return inner_function()
print(outer_function())

#pass by value
def addOne(x):
    x = x+1
    print("inside :",x)
x= 5
addOne(x)
print("outside :",x)

#pass by reference
def modifylist(list):
    list.append(4) #modify the list
    print("inside :",list)

list =[1,2,3]
modifylist(list)
print("outside :",list)

def modifylist(list1):
    list1 =[7,8,9] #by using assignment operator, it will create new list instead of modify it
    print("inside :",list1)

list1 =[1,2,3]
modifylist(list1)
print("outside :",list1)