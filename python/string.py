name1 = 'mohit sharma'
name2 = "my father name is Mr. Ashok Sharma"
name3 = '''I have one sister and one brother 
and i have 5 members in my family.'''
print(name1,name2,name3)
print(type(name1))
print(type(name2))
print(type(name3))
print(len(name1))

#traverse
#using for loop
for i in name1:
    print(i)

#using list comprehension
list =[char for char in name1]
for i in list:
    print(i)

#find
print(name1.find('m'))
print(name1.find('s'))
print(name1.find('p'))
print(name1.find('hit'))

#slicing of a string
print(name1[2:7])

#modifying a string
str1 = "ruchi Sharma"
str2 =str1.upper()
print(str2)
str3=str2.lower()
print(str3)
s4 =str3.capitalize()
print(s4)
s5 = "   mohit    "
print(s5.strip())
s6="abcdefghdefshdjdkdef"
print(s6.replace("def","mohit",2))

s7 ="mohit rohit ruchi"
print(s7.split())

#concatenation
print(s6+s7)

#formatting
fruit1 ="mango"
fruit2 ="apple"
str8 = "i have fruits-{f1} and {f2} ".format(f1=fruit1,f2 =fruit2)
print(str8)

student_name = "Mohit Sharma"
student_marks=  98
str9 ="The student name is {s} and marks is {m}".format( s = student_name , m = student_marks)
print(str9)
