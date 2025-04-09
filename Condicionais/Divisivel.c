//Verifica se um número é divisível por 3 e 5
#include <stdio.h>
int main(){

    int n;

    printf("Informe um número inteiro qualquer: \n");
    scanf("%d", &n);

    if(n%3 == 0){
        if(n%5 == 0){
            printf("O NUMERO E DIVISIVEL");
        }else{
            printf("O NUMERO NAO E DIVISIVEL");
        }
    }else{
        printf("O NUMERO NAO E DIVISIVEL");
    }

    return 0;
}