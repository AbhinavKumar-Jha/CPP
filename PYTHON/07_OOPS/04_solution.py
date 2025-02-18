# If we put 2 underscore before any variable means that variable is now private and it can only accessed by class not by def
class Car:
    def __init__(self, brand, model):
        self.__brand=brand
        self.model=model

    def get_brand(self):
        return self.__brand + "!"

    def full_name(self):
        return f"{self.__brand} {self.model}"
    
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size=battery_size

my_tesla=ElectricCar("Tesla", "Model S", "85kWh")
# print(my_tesla.full_name())
# print(my_tesla.__brand)
print(my_tesla.get_brand())


# my_car=Car("Toyota", "Corolla")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.full_name())

# my_new_car=Car("Tata", "Safari")

# print(my_new_car.brand)
# print(my_new_car.model)
