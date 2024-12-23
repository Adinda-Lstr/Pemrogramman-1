baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))

matriks = []
for i in range(baris):
    for j in range(kolom):
        print(angka[i*kolom + j], end=" ")  
    print()  