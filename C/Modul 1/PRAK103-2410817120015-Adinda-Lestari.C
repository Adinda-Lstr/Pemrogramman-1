#include <stdio.h>
int main()
{
    // Mendefinisikan variable
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;

    // Menampilkan niali variable
    printf("Variable a bernilai: %.f\n", a);
    printf("Variable b bernilai: %.f\n", b);
    printf("Variable x bernilai: %.f\n", x);
    printf("Variable y bernilai: %.f\n", y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f", (a + b) * x / y);
    return 0;
}