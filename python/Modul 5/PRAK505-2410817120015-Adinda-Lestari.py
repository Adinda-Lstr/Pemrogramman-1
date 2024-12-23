def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    angkatan = tahun_sekarang
    
    
    print(f"Perkenalkan Nama Saya : {Namaku}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {angkatan}")
    print(f"Asal Saya dari : {Asal}")

def main():
    tahunLahir = int(input())  
    Namaku = input()           
    Asal = input()             
    
    
    Biodata(tahunLahir, Namaku, Asal)

if __name__ == "__main__":
    main()
