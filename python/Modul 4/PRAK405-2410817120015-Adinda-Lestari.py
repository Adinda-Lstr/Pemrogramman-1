n, kelipatan = map(int,input("").split())
total = 0

for i in range (1, n + 1):
    sum_n = 0
    print("(", end="")

    for j in range (1, i + 1):
        print(f"{j} * {kelipatan}", end="")
        sum_n += j * kelipatan

        if j < i or i > j:
            print(") + (", end="")

    print(f") = {sum_n}")
    total += sum_n

print(f"{total}")
