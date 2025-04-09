//Calcula o ajuste salárial de um funcionário
#include <stdio.h>
int main() {

    float salario, reajuste;

    printf("Informe o salário do funcionário: \n");
    scanf("%f", &salario);

    if(salario<=300.00){
        reajuste = (salario*0.5)+salario;
            printf("SALARIO COM REAJUSTE = %.2f", reajuste);
    }
    else if(salario>300.00){
        reajuste = (salario*0.3)+salario;
            printf("SALARIO COM REAJUSTE = %.2f", reajuste);
    }

    return 0;
}