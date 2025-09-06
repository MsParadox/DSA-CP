name = ("mohit","rohit","ruchi","mummy")
#only 1 item
fruitstr =("apple")#string

fruittup =("apple",)#tuple
fruit = tuple(("optimus prime"))#alternative 
print(type(name))
print(type(fruitstr))
print(type(fruittup))
print(type(fruit))
print(len(name))

#indexing
print(name[0])
print(name[-1])
print(name[0:2])
print(name[-3:-1])
print(name[1:])

#special functions
if "mohit" in name:
    print("Yes")
if "vikash" not in name:
    print("No")

#traverse
for i in name:
    print(i)

#cancatenate
bigtuple = name+fruittup
print(bigtuple)

#unpacking a tuple
name1, name2, name3, name4 = name
print(name1)
print(name3)
