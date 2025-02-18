# # Write a program to creare one list and change any item value on a list(using the index no.)
# a=[1,2,3,4,5,6,7]
# a[3]=55
# print(a)
# a.pop(-1)
# print(a)

# a=(1,2,3,4,5,6,7)
# a=list(a)
# a.append(10)
# a.pop(5)
# a=tuple(a)
# print(a)

# WAP to remove any item o a set using remove method
# set1={1,2,3,4,5}
# print(type(set1))
# set1.add("Python")
# set1.remove(2)
# print(set1)

# student={"Name":"Abhinav", "Roll":02,"Dept":"IT"}
# print(student)
# print(type(student))
# print(student.get("Name"))
# print(student.keys())
# print(student.values())

# student_details={
#     "name":"Abhinav",
#     "id":1234,
#     "Dept":"IT",
#     "Roll":2
# }
# student_details["College"]="JIS"
# print(student_details)
# # Remove any item on a dict pop()
# student_details.pop("id")
# print(student_details)
# # Remove any item in a dict copy()
# a=student_details.copy()
# print(a)


# WAP of sorting the list item's in ascending and descending order
a=[1,4,6,9,2,3,8,7,5]
a.sort(reverse=True)
print(a)
a.sort()
print(a)                            