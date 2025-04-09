//Mostra qual é a cota de um aluno
#include <stdio.h>
int main() {

    float renda_bruta, sal_min, renda_pessoa;
    int qtd_pessoas, tipo_escola, etinia;

    scanf("%f", &renda_bruta);
    scanf("%d %d %d", &qtd_pessoas, &tipo_escola, &etinia);

    sal_min = 937.00;
    renda_pessoa = renda_bruta / qtd_pessoas; 

    if(tipo_escola == 2){
        if(renda_pessoa<=(1.5*sal_min)){
            if(etinia == 1 || etinia == 2 || etinia == 3){
                printf("ALUNO COTISTA (L2)");
            }
            else{
                printf("ALUNO COTISTA (L1)");
            }
        }
        else if(renda_pessoa>=(1.5*sal_min)){
            if(etinia == 1 || etinia == 2 || etinia == 3){
                printf("ALUNO COTISTA (L4)");
            }
            else{
                printf("ALUNO COTISTA (L3)");
            }
        }
    }
    else{
        printf("ALUNO NAO COTISTA");
    }
    return 0;
}