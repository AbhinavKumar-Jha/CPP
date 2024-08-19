# password =int(input("Enter the characters of your password :"))
# if password <6:
#     print("Weak")
# elif password <=10:
#     print("Medium")
# else:
#     print("Hard") 


Password = "Secure3p@ss"

if len(Password) <6:
    strength = "Weak"
elif len(Password) <=10:
    strength = "Medium"
else:
    strength = "Hard"

print("Password Strength is :",strength)