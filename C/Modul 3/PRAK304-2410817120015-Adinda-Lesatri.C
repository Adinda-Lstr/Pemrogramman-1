#include <stdio.h>
int main(){
    int nilai;
    scanf("%d", &nilai);

    if(nilai == 0){
        printf("Nol");
    }
    else if(nilai >= 1 && nilai <= 9){
        printf("satuan");
    }
    else if(nilai >=11 && nilai <= 19){
        printf("Belasan");
    }
    else if(nilai >= 20 && nilai <= 99){
        printf("Puluhan");
    }
    else{
        printf("Anda menginput melebihi limit bilangan");
    }
    return 0;
    }