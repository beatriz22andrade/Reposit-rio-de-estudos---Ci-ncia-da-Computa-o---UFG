//Classifica um aço
#include <stdio.h>
int main() {

    int CC, DR, RT;

    scanf("%d %d %d", &CC, &DR, &RT);

    if(CC<7){
        if(DR>50){
            if(RT>80000){
                printf("ACO DE GRAU = 10");
            }else{
                printf("ACO DE GRAU = 9");
            }
        }else{
            printf("ACO DE GRAU = 8");
        }
    }else{
        printf("ACO DE GRAU = 7");
    }

    return 0;
}