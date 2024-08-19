pet = input("Enter either cat or dog :")
age = int(input("Enter the age of the pet species :"))
if pet == "Dog":
    if age <2:
        print("Puppy food")
    else:
        print("Adult food")
if pet == "Cat":
    if age <5:
        print("Junior cat food")
    else:
        print("senior cat food")