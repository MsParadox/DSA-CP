phones = {
    "mohit":9713,
    "rohit":7828,
    "ruchi":7241
}
print(phones)
print(type(phones))
print(len(phones))

#access item
print(phones["mohit"])
print(phones.get("mohit"))
print(phones.keys())

#update value
phones["mohit"]=8815
print(phones)

#add
phones["papa"]=9575
print(phones)
#adding another dictionary
more_phones ={
    "kia":9834,
    "pia":6588
}
phones.update(more_phones)
print(phones)

#removing
phones.pop("pia")
print(phones)
phones.popitem()
print(phones)
print(more_phones)
more_phones.clear()
print(more_phones)

#traverse
for i in phones:
    print(i)
for i in phones:
    print(phones[i])
for i in phones.items():
    print(i)
for x,y in phones.items():
    print(x,y)    

#nested dictionaries
extra_phones = {
    "Area1":{
        "x":0,
        "y":1,
        "z":2
    },
    "Area2":{
        "a":100,
        "b":200,
        "c":300
    }
}
print(extra_phones)
print(extra_phones["Area1"]["y"])