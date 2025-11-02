#include <stdio.h>   // Biblioteca para entrada e saída padrão (printf, scanf, fopen, etc.)
#include <stdlib.h>  // Biblioteca para funções utilitárias (como exit, malloc, etc.)

#define TAM 10       // Define uma constante chamada TAM com valor 10 (tamanho do vetor)

// Função que calcula a média dos elementos de um vetor
float calculaMedia(int vetor[], int tamanho) {
    int soma = 0;  // Variável para acumular a soma dos elementos
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];  // Soma cada elemento do vetor
    }
    return (float)soma / tamanho;  // Retorna a média como float
}

int main() {
    FILE *arquivo;         // Ponteiro para manipulação de arquivo
    int numeros[TAM];      // Vetor para armazenar os números lidos
    float media;           // Variável para armazenar a média

    // Abre o arquivo "numeros.txt" para escrita ("w" = write)
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {  // Verifica se houve erro ao abrir o arquivo
        printf("Erro ao criar o arquivo.\n");
        return 1;  // Encerra o programa com código de erro
    }

    // Solicita ao usuário que digite 10 números inteiros
    printf("Digite %d numeros inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        int num;
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);               // Lê o número digitado
        fprintf(arquivo, "%d\n", num);   // Escreve o número no arquivo, em uma nova linha
    }

    fclose(arquivo);  // Fecha o arquivo após a escrita

    // Reabre o arquivo "numeros.txt" para leitura ("r" = read)
    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {  // Verifica se houve erro ao abrir o arquivo
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;  // Encerra o programa com código de erro
    }

    // Lê os 10 números do arquivo e armazena no vetor
    for (int i = 0; i < TAM; i++) {
        fscanf(arquivo, "%d", &numeros[i]);  // Lê um número por vez e salva no vetor
    }

    fclose(arquivo);  // Fecha o arquivo após a leitura

    // Chama a função para calcular a média dos números armazenados no vetor
    media = calculaMedia(numeros, TAM);

    // Exibe os números lidos do arquivo
    printf("\nNumeros lidos do arquivo:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d\n", numeros[i]);  // Imprime cada número do vetor
    }

    // Exibe a média calculada
    printf("\nMedia dos numeros: %.2f\n", media);  // Imprime a média com duas casas decimais

    return 0;  
}
