#include <stdio.h>

int main() {
    int n, i;
    float valorVendido, valorTotal = 0, media, chuteValor;

    printf("Informe o numero de frutas vendidas: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite o preço da fruta %d: ", i);
        scanf("%f", &valorVendido);
        valorTotal += valorVendido;
    }

    media = valorTotal / n;

    printf("Informe um valor em reais: ");
    scanf("%f", &chuteValor);

    while (chuteValor > 0 && chuteValor != media) {
        if (chuteValor > media) {
            printf("Errou pra mais!\n");
        } else {
            printf("Errou pra menos!\n");
        }

        printf("Informe um valor em reais: ");
        scanf("%f", &chuteValor);
    }

    if (chuteValor == media) {
        printf("Acertou a media!\n");
    }

    return 0;
}
