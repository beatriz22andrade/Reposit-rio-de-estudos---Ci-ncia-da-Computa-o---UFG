//Converte a nota do aluno conforme estabelecido como A, B, C e D
#include <stdio.h>
int main(){

    float nota;
    char conceito;

    printf("Insira a nota do aluno: \n");
    scanf("%f", &nota);

    if(nota>=9.0 && nota<=10.0){
        conceito = 'A'; 
            printf("NOTA = %.1f CONCEITO = %c", nota, conceito);
    }
    else if(nota>=7.5 && nota<=8.9){
        conceito = 'B';
            printf("NOTA = %.1f CONCEITO = %c", nota, conceito);
    }
    else if(nota>=6.0 && nota<=7.4){
        conceito = 'C';
            printf("NOTA = %.1f CONCEITO = %c", nota, conceito);
    }
    else if(nota>=0.0 && nota<=5.9){
        conceito = 'D';
        printf("NOTA = %.1f CONCEITO = %c", nota, conceito);
    }

    return 0;
}