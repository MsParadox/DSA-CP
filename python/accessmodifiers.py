#public modifiers
class ABC:
    def __init__(self):
        self.public_attribute = None
    
    def public_function(self):
        pass

obj1 =ABC()
obj1.public_attribute
obj1.public_function()

#private modifiers
class XYZ:
    def __init__(self):
        self.__private_attribute = 10
    
    def __private_function(self):
        pass
obj2 =XYZ()
#obj2.__private_attribute
#obj2.__private_function()      attribute error   

#protected modifier
class PQR:
    def __init__(self):
        self._protected_attribute = None
    
    def _protected_function(self):
        pass
obj3 =PQR()
#obj3._protected_attribute
#obj3._protected_function()     attribute error

#inheritance
class Parent:
    def __init__(self):
        self.super_attribute = True
        print("This is the parent class")

class Childclass(Parent):
    def __init__(self):
        super().__init__()
        print("This is the Child class.")
        print(self.super_attribute)

Child1 =Childclass()
