//Retorna a data em escrito que foi inserida
#include <stdio.h>
int main(void){

    int data, dia, mes, ano;

    scanf("%d", &data);

    dia = data/1000000;
    mes = (data%1000000)/10000;
    ano = data%10000;
    
    if(data<111110){
        printf("Data invalida!");
    }
    
    if(dia>31){
        printf("Data invalida!");
        return 0;
    }

    if(mes == 1){
        printf("%d de janeiro de %d", dia, ano);
    }else if(mes == 2){
        if(dia<=28){
            printf("%d de feveriro de %d", dia, ano);
        }else{
            printf("Data inválida!");
        }
    }else if(mes == 3){
        printf("%d de março de %d", dia, ano);
    }else if(mes == 4){
        printf("%d de abril de %d", dia, ano);
    }else if(mes == 5){
        printf("%d de maio de %d", dia, ano);
    }else if(mes == 6){
        printf("%d de junho de %d", dia, ano);
    }else if(mes == 7){
        printf("%d de julho de %d", dia, ano);
    }else if(mes == 8){
        printf("%d de agosto de %d", dia, ano);
    }else if(mes == 9){
        printf("%d de setembro de %d", dia, ano);
    }else if(mes == 10){
        printf("%d de outubro de %d", dia, ano);
    }else if(mes == 11){
        printf("%d de novembro de %d", dia, ano);
    }else if(mes == 12){
        printf("%d de dezembro de %d", dia, ano);
    }else if(mes>12){
        printf("Data invalida!");
    }

    return 0;
}