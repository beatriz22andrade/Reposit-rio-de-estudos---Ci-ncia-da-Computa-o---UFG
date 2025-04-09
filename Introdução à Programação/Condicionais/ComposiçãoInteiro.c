//transforma os digitos em um número e calcula o seu quadrado
#include <stdio.h>
int main(){

    int n1, n2, n3, concatenacao, quadrado;
    
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &n1);
    
    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &n2);
    
    printf("Digite o terceiro número inteiro: \n");
    scanf("%d", &n3);

    if(n1>9 || n2>9 || n3>9){
        printf("DIGITO INVALIDO");
        return 0;
    }

    concatenacao = (n1*100) + (n2*10) + (n3*1);
    quadrado = concatenacao*concatenacao;

    printf("%d, %d", concatenacao, quadrado);
    return 0;
}