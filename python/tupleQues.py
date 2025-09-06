input_tuple = ('z','a','d','f','g','e','e','k')
list = []
print(input_tuple)

#adding reverse value in a list
for i in reversed(input_tuple):
    list.append(i)
    
output_tuple = tuple(list)    
print(output_tuple)