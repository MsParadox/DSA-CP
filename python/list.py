fruits = ["apple","banana","grapes","watermelon"]
print(fruits[1])
print(fruits)
print(len(fruits))
print(type(fruits))
print(fruits[-1])
if "banana" in fruits:
    print("banana is present in list ")
if "mango" not in fruits:
    print("mango is not present in list ")    
print(fruits[1:3])    
print(fruits[-3:-1])
list =[10,20,30,40,50,60]
list2 = ["Mohit","Rohit"]
list.append(70)
list.insert(2,90)
list.extend(list2)
print(list)
list.remove(30)
list.pop()
list.pop(1)
print(list)
list[2]="Ruchi"
list[3:5]=['a','b']
print(list)
list3 =["aa","elephant","cat","dog","bad"]
list3.sort()
print(list3)
list3.sort(reverse=True)
print(list3)
list.reverse()
print(list)
list4 =[1,2,3,4,5,6,7,8,9]
newlist=[]

for i in list4:
    if i>5:
        newlist.append(i)
print(newlist) 
#list comprehension
newl=[i for i in list4 if i>5]
print(newl)       
newfruits =[fruit for fruit in fruits if "p" in fruit]
print(newfruits)
#copy a list
new =list4.copy()
print(new)
newcancatenatelist =newfruits+new
print(newcancatenatelist)
list5 = [10,20 ,[30,40],50,60]
print(list5[2])
print(list5[2][0])