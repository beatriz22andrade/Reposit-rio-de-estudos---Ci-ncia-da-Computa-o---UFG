//Verifica de um número é palindromo
#include <stdio.h>
int main() {

    int n, uni, dez, inverso, cent, mil, dezmil;

    scanf("%d", &n);

    if(n>=0 && n<=9){
        printf("NUMERO INVALIDO");
        return 0;
    } else if(n>=10 && n<=99){
        dez = n/10;
        uni = (n%10)/10;
        inverso = uni*10+dez*1;
            if(n==inverso){
                printf("PALINDROMO");
            }
            else{
                printf("NAO PALINDROMO");
            }
        return 0;
    } else if(n>=100 && n<=999){
        cent = n/100;
        dez = (n%100)/10;
        uni = (n%10)/1;
        inverso = uni*100+dez*10+cent*1;
            if(n==inverso){
                printf("PALINDROMO");
            }
            else{
                printf("NAO PALINDROMO");
            }
    } else if(n>=1000 && n<=9999){
        mil = n/1000;
        cent = (n%1000)/100;
        dez = (n%100)/10;
        uni = (n%10)/1;
        inverso = uni*1000+dez*100+cent*10+mil*1;
            if(n==inverso){
                printf("PALINDROMO");
            }
            else{
                printf("NAO PALINDROMO");
            }
    } else if(n>=10000 && n<=99999){
        dezmil = n/10000;
        mil = (n%10000)/1000;
        cent = (n%1000)/100;
        dez = (n%100)/10;
        uni = (n%10)/1;
        inverso = uni*10000+dez*1000+cent*100+mil*10+dezmil*1;
            if(n==inverso){
                printf("PALINDROMO");
            } else{
                printf("NAO PALINDROMO");
            }
    } else if(n>=100000){
        printf("NUMERO INVALIDO");
    }

    return 0;
}