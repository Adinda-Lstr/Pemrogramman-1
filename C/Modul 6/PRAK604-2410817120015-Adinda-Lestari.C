#include <stdio.h>
#include <string.h>
int main()
{
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", asli);
    scanf("%[^\n]%*c", palsu);
    
    int kode, pesan, o, p=0, q=0;
    kode = strlen(asli);
    pesan = strlen(palsu);

    if(kode != pesan){
        printf("panjang kalimat berbeda, pesan palsu");
    }else{
        for(o = 0; o < kode; o++){
            if(asli[o]==palsu[o]){
                printf("*");
                p++;
            }else{
                printf("#");
                q++;
            }
        }
        printf("\n* = %d", p);
        printf("\n# = %d", q);
    if(p >= q){
        printf("\n pesan asli");
    }else if(p < q){
        printf("\npesan palsu");
    }
    }
}