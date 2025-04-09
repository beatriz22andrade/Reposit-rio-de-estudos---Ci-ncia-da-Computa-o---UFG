//Informa o valor de Y de acordo com o valor de X
#include <stdio.h>
int main() {

    int x, y;

    printf("Informe o valor de X: \n");
    scanf("%d", &x);

    if(x<1){
        printf("Y = %d", x);
    }
    if(x==1){
        printf("Y = 0");
    }
    if(x>1){
        y = x*x;
        printf("Y = %d", y);
    }

    return 0;
}