//Mostra a ordem de valores como já estabelecido
#include <stdio.h>
int main() {

    int x, y, z;
    char a, b, c;

    scanf("%d %d %d", &x, &y, &z);
    scanf(" %c %c %c", &a, &b, &c);

    if(a=='A'){
        if(b=='B'){
            if(c=='C'){
                if(x<=y && y<=z){
                    printf("%d %d %d", x, y, z);
                }
                else if(x<=z && z<=y){
                    printf("%d %d %d", x, z, y);
                }
                else if(y<=x && x<=z){
                    printf("%d %d %d", y, x, z);
                }
                else if(y<=z && z<=x){
                    printf("%d %d %d", y, z, x);
                }
                else if(z<=x && x<=y){
                    printf("%d %d %d", z, x, y);
                }
                else if(z<=y && y<=x){
                    printf("%d %d %d", z, y, x);
                }
            }
        }
        else if(b=='C'){
            if(x<=y && y<=z){
                printf("%d %d %d", x, z, y);
            }
            else if(x<=z && z<=y){
                    printf("%d %d %d", x, y, z);
            }
            else if(y<=x && x<=z){
                    printf("%d %d %d", y, z, x);
            }
            else if(y<=z && z<=x){
                    printf("%d %d %d", y, x, z);
            }
            else if(z<=x && x<=y){
                    printf("%d %d %d", z, y, x);
            }
            else if(z<=y && y<=x){
                    printf("%d %d %d", z, x, y);
            }
        }
    }
    if(a=='B'){
        if(b=='A'){
            if(c=='C'){
                if(x<=y && y<=z){
                    printf("%d %d %d", y, x, z);
                }
                else if(x<=z && z<=y){
                    printf("%d %d %d", z, x, y);
                }
                else if(y<=x && x<=z){
                    printf("%d %d %d", x, y, z);
                }
                else if(y<=z && z<=x){
                    printf("%d %d %d", z, y, x);
                }
                else if(z<=x && x<=y){
                    printf("%d %d %d", x, z, y);
                }
                else if(z<=y && y<=x){
                    printf("%d %d %d", y, z, x);
                }
            }
        }
        else if(b=='C'){
            if(x<=y && y<=z){
                    printf("%d %d %d", y, z, x);
                }
                else if(x<=z && z<=y){
                    printf("%d %d %d", z, y, x);
                }
                else if(y<=x && x<=z){
                    printf("%d %d %d", x, z, y);
                }
                else if(y<=z && z<=x){
                    printf("%d %d %d", z, x, y);
                }
                else if(z<=x && x<=y){
                    printf("%d %d %d", x, y, z);
                }
                else if(z<=y && y<=x){
                    printf("%d %d %d", y, x, z);
                }
        }
    }
    if(a=='C'){
        if(b=='A'){
            if(c=='B'){
                if(x<=y && y<=z){
                    printf("%d %d %d", z, x, y);
                }
                else if(x<=z && z<=y){
                    printf("%d %d %d", y, x, z);
                }
                else if(y<=x && x<=z){
                    printf("%d %d %d", z, y, x);
                }
                else if(y<=z && z<=x){
                    printf("%d %d %d", x, y, z);
                }
                else if(z<=x && x<=y){
                    printf("%d %d %d", y, z, x);
                }
                else if(z<=y && y<=x){
                    printf("%d %d %d", x, z, y);
                }
            }
        }
        else if(b=='B'){
            if(x<=y && y<=z){
                    printf("%d %d %d", z, y, x);
                }
                else if(x<=z && z<=y){
                    printf("%d %d %d", y, z, x);
                }
                else if(y<=x && x<=z){
                    printf("%d %d %d", z, x, y);
                }
                else if(y<=z && z<=x){
                    printf("%d %d %d", x, z, y);
                }
                else if(z<=x && x<=y){
                    printf("%d %d %d", y, x, z);
                }
                else if(z<=y && y<=x){
                    printf("%d %d %d", x, y, z);
                }
        }
    }

    return 0;
}