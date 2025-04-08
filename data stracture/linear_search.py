arr = []
arr.append(input("Enter name of 1st element: "))
arr.append(input("Enter name of 2nd element: "))
arr.append(input("Enter name of 3rd element: "))
print(arr)

key = input("Enter the searching element of the array: ")
idx = 0
for el in arr:
    if el == key:
        print("ELEMENT IS FOUND at index", idx)
        break
    idx += 1
else:
    print("ELEMENT NOT FOUND")
