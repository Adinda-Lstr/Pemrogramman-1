#include <stdio.h>
int main()
{
    // Mendefiniskan variable 
    int a,b,x,y;
    a = 9; b = 5; x = 8; y = 8;
    int modulus_ab = a % b;
    int modulus_xy = x % y;
     
     // Menampilkan nilai variable
     printf("Variable a bernilai %d\n", a);
     printf("Variable b bernilai %d\n", b);
     printf("Variable x bernilai %d\n", x);
     printf("Variable y bernilai %d\n", y);
     printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", modulus_ab + modulus_xy );
     return 0;
}