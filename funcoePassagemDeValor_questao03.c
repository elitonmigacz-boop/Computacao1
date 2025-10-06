#include <stdio.h>

int calculaDigitoVerificador(int num) {
    int x1 = num / 100;           
    int x2 = (num / 10) % 10;     
    int x3 = num % 10;            

    int soma = 1 * x1 + 2 * x2 + 3 * x3;
    return (soma % 11) % 10;
}

int main() {
    int numero;

    printf("Digite um numero de tres digitos: ");
    if (scanf("%d", &numero) == 1 && numero >= 100 && numero <= 999) {
        int digito = calculaDigitoVerificador(numero);
        printf("Digito verificador: %d\n", digito);
    } else {
        printf("Entrada invalida. Digite um numero entre 100 e 999.\n");
    }

    return 0;
}
