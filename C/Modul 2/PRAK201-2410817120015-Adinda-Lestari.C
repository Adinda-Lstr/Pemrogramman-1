#include <stdio.h>
int main()
{
    char nama[20], nim[50], kelas[10], tempat[100], alamat[200], hobi[50], nohp[30];
     

    printf("Nama                     : ");
    fgets(nama,sizeof(nama), stdin);
    printf("NIM                      : ");
    fgets(nim,sizeof(nim), stdin);
    printf("Kelas pararel            : ");
    fgets(kelas,sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir     : ");
    fgets(tempat,sizeof(tempat), stdin);
    printf("Alamat                   : ");
    fgets(alamat,sizeof(alamat), stdin);
    printf("Hobby                    : ");
    fgets(hobi,sizeof(hobi), stdin);
    printf("No.Hp                    : ");
    fgets(nohp,sizeof(nohp), stdin);

    printf("\n");
    printf("Nama                     : %s", nama);
    printf("NIM                      : %s", nim);
    printf("Kelas Pararel            : %s", kelas);
    printf("Tempat/Tanggal Lahir     : %s", tempat);
    printf("Alamat                   : %s", alamat);
    printf("Hobby                    : %s", hobi);
    printf("No.Hp                    : %s", nohp);

    return 0;
}