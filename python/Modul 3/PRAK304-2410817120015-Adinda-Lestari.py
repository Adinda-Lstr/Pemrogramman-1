nilai = int(input())

if nilai == 0:
    print("Nol")
elif nilai >= 1 and nilai <= 9:
    print("satuan")
elif nilai >= 10 and nilai <= 19:
    print("belasan")
elif nilai == 10 or nilai >= 20 and nilai <= 99:
    print("puluhan")
else:
    print("Anda menginput melebihi limit bilangan")