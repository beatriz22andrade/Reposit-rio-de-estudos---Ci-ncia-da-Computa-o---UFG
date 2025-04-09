//Calcula as raízes de uma equação de 2° grau
#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    delta = b*b-4*a*c;

    if(delta==0){
        x1 = (-b+sqrt(delta))/(2*a);
        printf("RAIZ UNICA\nX1 = %.2f", x1);
    }
    else if(delta<0){
        printf("RAIZES IMAGINARIAS");
    }
    else if(delta>0){
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
            if(x1>x2){
                printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f", x2, x1);
            }else{
                printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f", x1, x2);
            }
    }
}