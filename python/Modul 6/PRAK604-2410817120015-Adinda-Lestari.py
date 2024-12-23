asli = input()
palsu = input()
kode = len(asli)
pesan = len(palsu)

a = 0
b = 0

if kode != pesan:
    print('panjang kalimat berbeda, pesan palsu')
else:
    for i in range(kode):
        if asli[i] == palsu[i]:
            print('*', end='')  
            a += 1
        else:
            print('#', end='')  
            b += 1

    print('\n* = {}'.format(a))
    print('# = {}'.format(b))

    if a >= b:
        print('pesan asli')
    else:
        print('pesan palsu')
