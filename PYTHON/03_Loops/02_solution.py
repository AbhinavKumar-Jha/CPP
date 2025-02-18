n = int(input("Enter the number :"))

sum_even = 0

for i in range(1, n+1):
    if i%2 == 0:
        #sum_even += 1
        sum_even += i

print("Sum of even number is :",sum_even)