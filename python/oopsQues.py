class Vehicle:
    def __init__(self,seating_capacity):
        self.seating_capacity= seating_capacity

    def get_fare(self):
        return self.seating_capacity*100
        

class Bus(Vehicle):
    def __init__(self, seating_capacity):
        super().__init__(seating_capacity)
    def get_fare(self):
        return super().get_fare()+(super().get_fare())*10/100

Vehicle1 =Vehicle(50)
print("vehicle fare:",Vehicle1.get_fare())

Bus1 =Bus(50)
print("bus fare:",Bus1.get_fare())