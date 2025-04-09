//Ordena valores de ordem crescente 
#include <stdio.h>
int main() {

    float v1, v2, v3;

    scanf("%f %f %f", &v1, &v2, &v3);

    if(v1<=v2 && v2<v3){
        printf("%.2f, %.2f, %.2f", v1, v2, v3);
    }
    if(v1<v3 && v3<v2){
        printf("%.2f, %.2f, %.2f", v1, v3, v2);
    }
    if(v2<v1 && v1<v3){
        printf("%.2f, %.2f, %.2f", v2, v1, v3);
    }
    if(v2<v3 && v3<v1){
        printf("%.2f, %.2f, %.2f", v2, v3, v1);
    }
    if(v3<v1 && v1<v2){
        printf("%.2f, %.2f, %.2f", v3, v1, v2);
    }
    if(v3<v2 && v2<v1){
        printf("%.2f, %.2f, %.2f", v3, v2, v1);
    }

    return 0; 
}