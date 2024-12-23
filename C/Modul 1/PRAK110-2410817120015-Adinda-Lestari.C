#include <stdio.h>
#include <math.h>

int main()
{

    // Mendefinisikan variable
    int alas, tinggi, keliling, luas;
    alas = 5;
    tinggi = 12;
    keliling = 30;
    luas = 30;
    int miring = sqrt (alas^2 + tinggi^2);

    // Menampilkan nilai 
    printf("Diketahui: \n");
    printf("Alas = %d cm \n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab: \n");
    printf("sis A = %d cm\n", tinggi);
    printf("sis B = %d cm\n", miring);
    printf("sisi C = %d cm\n", alas);
    printf("keliling = %d cm\n", keliling);
    printf("luas = %d cm\n", luas);
    return 0;
}