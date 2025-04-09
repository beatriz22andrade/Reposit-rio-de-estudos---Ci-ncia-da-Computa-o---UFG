//Calcula o consumo de água de acordo com o tipo de consumidor
#include <stdio.h>
int main() {

    int conta;
    float consumo_mtc, valor_conta;
    char tipo_consumidor;

    scanf("%d %f %c", &conta, &consumo_mtc, &tipo_consumidor);

    if(tipo_consumidor == 'R'){
        valor_conta = 5.00+(consumo_mtc*0.05);
        printf("CONTA = %d\n", conta);
        printf("VALOR DA CONTA = %.2f", valor_conta);
    }
    else if(tipo_consumidor == 'C'){
        if(consumo_mtc <= 80){
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = 500.00");
        }else{
            valor_conta = 500.00+((consumo_mtc-80)*0.25);
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2f", valor_conta);
        }
    }
    else if(tipo_consumidor == 'I'){
        if(consumo_mtc <= 100){
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = 800.00");
        }else{
            valor_conta = 800.00+((consumo_mtc-100)*0.04);
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2f", valor_conta);
        }
    }

    return 0;
}