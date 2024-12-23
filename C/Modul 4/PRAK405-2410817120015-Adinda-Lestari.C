#include <stdio.h>
int main() 
{
    int n, kelipatan;
    printf(" ");
    scanf("%d %d", &n, &kelipatan);
    
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int jumlah = 0;
        
        printf("(");
        for (int j = i; j >= 1; j--) {
            jumlah += j * kelipatan;
            printf("%d * %d", j, kelipatan);
            if (j > 1) {
                printf(") + ");
            } else {
                printf(") ");
            }
        }
        
        printf("= %d\n", jumlah);
        total += jumlah;
    }
    
    printf("%d\n", total);
    
    return 0;
}
