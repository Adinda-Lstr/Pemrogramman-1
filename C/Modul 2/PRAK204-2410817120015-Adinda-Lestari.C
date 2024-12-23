#include <stdio.h>
int main(){
    // input 1
    float jari_jari, ting, volume, Luas, Keliling;

    scanf("%f", &jari_jari);
    scanf("%f", &ting);

    volume = 22.0 / 7.0 * jari_jari * jari_jari * ting;
    Luas = 2 * 22.0 / 7.0 * jari_jari * (jari_jari+ting);
    Keliling = 2 * 22.0 / 7.0 * jari_jari;

    // output

    printf("\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas= %.2f\n", Luas);
    printf("Keliling = %.2f\n", Keliling);

    // input 2
    float jarijari, tinggi, volum, luas, keliling;

    scanf("%f", &jarijari);
    scanf("%f", &tinggi);

    volum = 22.0 / 7.0 * jarijari * jarijari * tinggi;
    luas = 2 * 22.0 / 7.0 * jarijari * (jarijari+tinggi);
    keliling = 2 * 22.0 / 7.0 * jarijari;

    // output

    printf("\n");
    printf("Volume = %.2f\n", volum);
    printf("Luas= %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    
    return 0;

}