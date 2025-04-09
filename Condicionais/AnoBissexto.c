//Informa se um ano é bissexto ou não
#include <stdio.h>
int main() {

    int ano;

    printf("Informe o ano: \n");
    scanf("%d", &ano);

    if(ano>1582){
        if(ano%4==0){
            if(ano%100 != 0){
                printf("ANO BISSEXTO");
            }else if(ano%100 == 0){
                if(ano%400 == 0){
                    printf("ANO BISSEXTO");
                }else{
                    printf("ANO NAO BISSEXTO");
                }
            }
        }else{
            printf("ANO NAO BISSEXTO");
        }
    }else{
        printf("ANO NAO BISSEXTO");
    }

    return 0;
}