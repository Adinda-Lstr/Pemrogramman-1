import math
#input 2
A, B = map(float, input(). split())

C = math.sqrt((B * B) - (A * A))
keliling = A + B + C
luas = 0.5 * C * A

print("")
print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

# input 2
A1 = int(input(""))
B1 = int(input(""))

C1 = math.sqrt((B1 * B1) - (A1 * A1))
keliling1 = A1 + B1 + C1
luas1 = 0.5 * C1 * A1

print("")
print(f"Alas = {C1:.0f} cm")
print(f"Tinggi = {A1:.0f} cm")
print(f"Keliling = {keliling1:.0f} cm")
print(f"Luas = {luas1:.0f} cm^2")