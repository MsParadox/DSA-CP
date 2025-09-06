str = input("Enter the string :")
n =int(input("Enter the number :"))

s1 = str[0:n-1]
s2 = str[n-1:]

S ="abcdefghijklmnopqrstuvwxyz"
reverseS= S[::-1]

dict1 =dict(zip(S, reverseS))

s3=""
for i in s2:
    s3 =s3+dict1[i]
    
outputStr =s1+s3
print(outputStr)