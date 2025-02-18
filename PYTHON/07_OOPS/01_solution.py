class car:
    def __init__(self, brand, model):
        self.brand=brand
        self.model=model

my_car=car("Toyota", "Corolla")
print(my_car.brand)
print(my_car.model)

my_new_car=car("Tata", "Safari")
print(my_new_car.brand)
print(my_new_car.model)