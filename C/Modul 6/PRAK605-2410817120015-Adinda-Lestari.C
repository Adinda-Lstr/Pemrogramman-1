#include <stdio.h>
int main(){
    int Matriks_A[10][10], Matriks_B[10][10], Matriks_AXB[10][10];
    int a, d, i, n, jumlah = 0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(a = 0; a < n; a++){
        for(d = 0; d < n; d++){
            scanf("%d", &Matriks_A[a][d]);
            }
        }
    printf("Matriks B\n");
    for(a = 0; a < n; a++){
        for(d = 0; d < n; d++){
            scanf("%d", &Matriks_B[a][d]);
            }
        }
    for(a = 0; a < n; a++){
        for(d = 0; d < n; d++){
            for(i = 0; i < n; i++){
                jumlah = jumlah + Matriks_A[a][i] * Matriks_B[i][d];
            }
            Matriks_AXB[a][d] = jumlah;
            jumlah = 0;
            }
        }
    printf("Matriks AXB\n");
    for(a = 0; a < n; a++){
        for(d = 0; d < n; d++){
            printf("%d ", Matriks_AXB[a][d]);
            }
        printf("\n");}
}