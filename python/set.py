names ={ "mohit","rohit","ruchi","mummy","papa"}
print(names)

print(len(names))
print(type(names))

for i in names:
    print(i)
if "mummy" in names:
    print("Yes")

#addition
names.add("mohit")
names.add("vikash")
print(names)

#addition of list or tuple
listname =["ria","diya"]
tuplename=("mia","sia")
names.update(tuplename)
names.update(listname)
print(names)

#remove
names.remove("mohit")
print(names)
names.discard("tia")

#joining two sets
set1 ={'a','b','c'}
set2 ={ 1, 2, 'a'}
set4 ={2.5,477,7.89 ,'b'}
set3 = set1.union(set2)
print(set3)
set1.update(set2)
print(set1)
set1.intersection_update(set4)
print(set1)
set1.symmetric_difference_update(set4)
print(set1)