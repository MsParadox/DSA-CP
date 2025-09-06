n =int(input("Enter list size :"))
list =[]
for _ in range(n) :
    list.append(int(input()))
idx1 =int(input("Enter first index :"))
idx2 =int(input("Enter second index :"))
print(list)
temp = list[idx1]
list[idx1]=list[idx2]
list[idx2]=temp
print(list)
