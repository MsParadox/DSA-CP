class Student:
    def set_name(self,name):
        self.name=name #class attribute
    
    def get_name(self):
        return self.name

Student1 = Student()
Student1.set_name("Mohit")
print(Student1.name)
print(Student1.get_name())
Student1.math_marks =100 #instance attribute
print(Student1.math_marks)
Student2 =Student()
Student2.set_name("Ruchi")
print(Student2.get_name())


#ques1
class Rectangle:
    #constructor
    def __init__(self, width , height):
        print(f"A rectangle of width :{width} and height :{height}.")
        self.width = width
        self.height = height
        
    def set_dimensions(self, width, height):
        self.width =width
        self.height = height

    def area(self):
        return (self.width*self.height)
    def perimeter(self):
        return 2*(self.width + self.height)
    
Rectangle1= Rectangle(4,9)
#Rectangle1.set_dimensions(4,9)
print(Rectangle1.width)
print(Rectangle1.height)
print(Rectangle1.area())
print(Rectangle1.perimeter()) 


