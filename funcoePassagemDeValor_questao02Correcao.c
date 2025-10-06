#include <stdio.h>

int arredonda(float x) {
    int inteiro = (int)x;
    float parteDecimal = x - inteiro;

    if (parteDecimal >= 0.5f)
        return inteiro + 1;
    else if (parteDecimal <= -0.5f)
        return inteiro - 1;
    else
        return inteiro;
}

int main() {
    float valor;
    printf("Digite um valor: ");
    if (scanf("%f", &valor) == 1) {
        int resultado = arredonda(valor);
        printf("Valor arredondado: %d\n", resultado);
    }
    return 0;
}
