#include <stdio.h>
int main()
{

    // Mendefinisikan Variable
    float putaran = 5;
    float jarak_total = 14;
    float jarijari = jarak_total / (2 * 3.14 * 5);

    // Menampilkan nilai variable
    printf("Diketaqhui: \n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran \n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f kilometer\n", jarak_total);
    printf("\n");
    printf("jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer\n", jarijari);
    return 0;
}