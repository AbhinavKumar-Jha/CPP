age = int(input("Enter the age of the person : "))
if age < 13:
    print("Child")
elif age < 19:
    print("Teenager")
elif age < 59:
    print("Adult")
else:
    print("Senior")