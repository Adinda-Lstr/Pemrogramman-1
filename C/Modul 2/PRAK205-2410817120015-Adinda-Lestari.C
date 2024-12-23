#include <stdio.h>
#include <math.h>
int main(){
    // input 1
 int X,Y, Z, Keliling, Luas;

 scanf("%d", &X);
 scanf("%d", &Y);
Z = sqrt((Y*Y)-(X*X));
Keliling = X+Y+Z;
Luas = 0.5 * Z * X;

//output
printf("\n");
printf("Alas = %d cm\n", Z);
printf("Tinggi = %d cm\n", X);
printf("Keliling = %d cm\n", Keliling);
printf("Luas = %d cm^2\n", Luas);

// input 2
int x, y, z, keliling, luas;

 scanf("%d", &x);
 scanf("%d", &y);
z = sqrt((y*y)-(x*x));
keliling = x+y+z;
luas = 0.5 * z * x;

//output
printf("\n");
printf("Alas = %d cm\n", z);
printf("Tinggi = %d cm\n", x);
printf("Keliling = %d cm\n", keliling);
printf("Luas = %d cm^2\n", luas);

return 0;
}
