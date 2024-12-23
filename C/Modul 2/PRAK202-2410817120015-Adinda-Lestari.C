#include <stdio.h>
int main()
{
// test case 1
    int nilai_pertama;
    float nilai_kedua;
{
    // input

    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai_pertama);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai_kedua);

    // hasil

    float hasil = nilai_pertama + nilai_kedua;

    // output

    printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai_pertama, nilai_kedua, hasil );
}


    // Test case 2

float nilai1;
float nilai2;

{
// input
    printf("Masukkan Nilai pertama: ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai kedua: ");
    scanf("%f", &nilai2);


     // hasil

     float hasil = nilai1 + nilai2;

     // output

     printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);

}
    return 0;
}