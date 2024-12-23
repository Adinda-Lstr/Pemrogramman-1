#include <stdio.h>
int main(){
     // input 1
     int a, b, c, d, e, f;
     float hasil;

     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     scanf("%d", &d);
     scanf("%d", &e);
     scanf("%d", &f);

     hasil = (float)((a-b)*c)/d-(e+f);
     //output 
     printf("%.3f", hasil);

     //input 2

     int g, h, i, j, k, l;
     float nilai;

     scanf("%d", &g);
     scanf("%d\n", &h);
     scanf("%d", &i);
     scanf("%d\n", &j);
     scanf("%d", &k);
     scanf("%d", &l);

     nilai = (float)((g-h)*i)/j-(k+l);

     // output
     printf("%.3f\n", nilai);
     return 0;

}