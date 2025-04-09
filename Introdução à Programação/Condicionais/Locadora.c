//Simula o custo para alugar uma charrete
#include <stdio.h>

int main() {
    float horas_uso;
    float taxa_base, valor_adicional, valor_total;
    int horas_adicionais;

    printf("Digite o número de horas de uso da charrete: ");
    scanf("%f", &horas_uso);

    taxa_base = (int)(horas_uso / 3) * 10;

    horas_adicionais = horas_uso - ((int)(horas_uso / 3) * 3);
    valor_adicional = horas_adicionais * 5;

    valor_total = taxa_base + valor_adicional;

    printf("O VALOR A PAGAR E = %.2f", valor_total);

    return 0;
}