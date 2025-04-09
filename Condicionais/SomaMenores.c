//Soma os três menores valores inseridos
#include <stdio.h>
int main(){

    int n1, n2, n3, n4, soma; 

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if(n1<n2 && n1<n3 && n1<n4){
        if(n2<n3 && n2<n4){
            if(n3<n4){
                soma = n1+n2+n3;
                printf("%d\n", soma);
            }else if(n4<n3){
                soma = n1+n2+n4;
                printf("%d\n", soma);
            }

        }else if(n3<n2 && n3<n4){
            if(n2<n4){
                soma = n1+n3+n2;
                printf("%d\n", soma);
            }else if(n4<n2){
                soma = n1+n3+n4;
                printf("%d\n", soma);
            }
        }else if(n4<n2 && n4<n3){
            if(n2<n3){
                soma = n1+n4+n2;
                printf("%d\n", soma);
            }else{
                soma = n1+n4+n3;
                printf("%d\n", soma);
            }
        }
    }else if(n2<n1 && n2<n3 && n2<n4){
        if(n1<n3 && n1<n4){
            if(n3<n4){
                soma = n2+n1+n3;
                printf("%d\n", soma);
            }else{
                soma = n2+n1+n4;
                printf("%d\n", soma);
            }

        }else if(n3<n1 && n3<n4){
            if(n1<n4){
                soma = n2+n3+n1;
                printf("%d\n", soma);
            }else{
                soma = n2+n3+n4;
                printf("%d\n", soma);
            }
        }else if(n4<n1 && n4<n3){
            if(n1<n3){
                soma = n2+n4+n1;
                printf("%d\n", soma);
            }else{
                soma = n2+n4+n3;
                printf("%d\n", soma);
            }
        }
    }else if(n3<n1 && n3<n2 && n3<n4){
        if(n1<n2 && n1<n4){
            if(n2<n4){
                soma = n3+n1+n2;
                printf("%d\n", soma);
            }else{
                soma = n3+n1+n4;
                printf("%d\n", soma);
            }
        }else if(n2<n1 && n2<n4){
            if(n1<n4){
                soma = n3+n2+n1;
                printf("%d\n", soma);
            }else{
                soma = n3+n2+n4;
                printf("%d\n", soma);
            }
        }else if(n4<n1 && n4<n2){
            if(n1<n2){
                soma = n3+n4+n1;
                printf("%d\n", soma);
            }else{
                soma = n3+n4+n2;
                printf("%d\n", soma);
            }
        }
    }else if(n4<n1 && n4<n2 && n4<n3){
        if(n1<n2 && n1<n3){
            if(n2<n3){
                soma = n4+n1+n2;
                printf("%d\n", soma);
            }else{
                soma = n4+n1+n3;
                printf("%d\n", soma);
            }
        }else if(n2<n1 && n2<n3){
            if(n1<n3){
                soma = n4+n2+n1;
                printf("%d\n", soma);
            }else{
                soma = n4+n2+n3;
                printf("%d\n", soma);
            }
        }else if(n3<n1 && n3<n2){
            if(n1<n2){
                soma = n4+n3+n1;
                printf("%d\n", soma);
            }else{
                soma = n4+n3+n2;
                printf("%d\n", soma);
            }
        }
    }

    return 0;
}