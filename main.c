#include <stdio.h>
#include <stdlib.h>

void mostraMatriz(int **matriz, int linhas, int colunas);

int main() {
    int **vet, linha, coluna;
    int i, j;

    scanf("%d %d", &linha, &coluna);

    if (linha <= 0 || coluna <= 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    vet = (int**) malloc(linha * sizeof(int*));
    if (!vet) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }
    for (i = 0; i < linha; i++) {
        vet[i] = (int*) malloc(coluna * sizeof(int));
        if (!vet[i]) {
            printf("Erro de alocação de memória.\n");
            while (i-- > 0) {
                free(vet[i]);
            }
            free(vet);
            return 1;
        }
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &vet[i][j]);
        }
    }

    mostraMatriz(vet, linha, coluna);

    for (i = 0; i < linha; i++) {
        free(vet[i]);
    }
    free(vet);

    return 0;
}

void mostraMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if (j < colunas - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
