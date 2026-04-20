"""
#LOOPS & ARRAY PRACTICE

fruits = ["apple", "banana", "cherry"]
for x in fruits: # for (x = element) in (fruits = array)
    print(x)

for x in "banana": # for (x = char) in ("banana" = array)
    print(x)

for x in fruits: 
    print(x)
    if x == "banana":
        break

for x in fruits:
    if x == "banana":
        break
    print(x)

for x in range(6): #range(6) = numbers 0-5
    print("range(6)",x)

for x in range(2, 6): #range(2, 6) = starting from 2 to 5
    print("range(2, 6)", x)

for x in range(2, 30, 3): #range(2, 30, 3) = starting from 2 to 29 but in increments of 3
    print("range(2, 30, 3)", x) 

for x in range(6):
    print("With else:", x)
else:
    print("Done!")
"""