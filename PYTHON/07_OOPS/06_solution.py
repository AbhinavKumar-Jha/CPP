# If we put 2 underscore before any variable means that variable is now private and it can only accessed by class not by def
class Car:
    total_car=0


    def __init__(self, brand, model):
        self.__brand=brand
        self.model=model
        Car.total_car +=1

    def get_brand(self):
        return self.__brand + "!"

    def full_name(self):
        return f"{self.__brand} {self.model}"
    
    def fuel_type(self):
        return "Petrol or Diesel"
    
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size=battery_size

    def fuel_type(self):
        return "Electric Charge"

# my_tesla=ElectricCar("Tesla", "Model S", "85kWh")
# print(my_tesla.full_name())
# print(my_tesla.__brand)
# print(my_tesla.fuel_type())

Car("Tata", "Safari")
Car("Tata", "Nexon")
print(Car.total_car)


# my_car=Car("Toyota", "Corolla")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.full_name())

# my_new_car=Car("Tata", "Safari")

# print(my_new_car.brand)
# print(my_new_car.model)
