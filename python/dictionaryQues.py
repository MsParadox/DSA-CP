dict1 ={
    'a':100,
    'b':200,
    'c':300
}
summ =0
for i in dict1:
    summ = summ + dict1[i]
print(summ)    
#alternative
print("The sum of values is :", sum(dict1.values()))