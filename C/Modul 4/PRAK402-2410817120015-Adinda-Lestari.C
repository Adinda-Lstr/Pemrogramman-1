#include <stdio.h>
int main()
 {
    int batas;
    printf(" ");
    scanf("%d", &batas);
    printf(" ");
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf(" ");
    for (int i = batas; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
