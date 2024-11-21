#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz, linhas, colunas, i, j;

    scanf("%d %d", &linhas, &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    matriz = malloc(linhas * sizeof(int *));
    for (i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas - 1; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("%d", matriz[i][j]);
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
