distance = int(input("Enter the distance you want to travel in KM :"))
if distance <3:
    transportation = "Walk"
elif distance <15:
    transportation = "Bike"
else:
    transportation = "Car"

print("AI recommends you the transport of :", transportation)