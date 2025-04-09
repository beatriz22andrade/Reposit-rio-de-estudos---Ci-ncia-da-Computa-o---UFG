//Verifica se aluno está aprovado ou repravado
#include <stdio.h>
int main() {
    
    float nota1, nota2, nota3, media;
    
    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);
    
    printf("Informe a terceira nota: \n");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if(media >= 6.0){
        printf("MEDIA = %.2f\n", media);
        printf("APROVADO");
    }
    else{
        printf("MEDIA = %.2f\n", media);
        printf("REPROVADO");
    }
}