a = int(input())
matriksA = []
print('matriks A')
for i in range (a):
    b = list(map(int, input().split()))
    matriksA.append(b)
matriksB = []
print('matriks B')
for i in range (a):
    b = list(map(int, input().split()))
    matriksB.append(b)
matriksAXB = []
print('matriks AXB')
for i in range (a):
    matriksAXB.append([])
    for j in range (a):
        x = 0
        for b in range (a):
            x = x + matriksA[i][b] * matriksB[b][j]
        matriksAXB[i].append(x)
for baris in matriksAXB:
    print(' '.join(map(str, baris)))
