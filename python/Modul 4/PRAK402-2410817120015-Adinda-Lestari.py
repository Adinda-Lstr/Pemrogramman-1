batas = int(input(" "))
print(" ", end=" ")
for i in range(1, batas + 1):
    if i % 2 != 0:
        print(i, end=" ")
print()  
print(" ", end=" ")
for i in range(batas, 1, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()  