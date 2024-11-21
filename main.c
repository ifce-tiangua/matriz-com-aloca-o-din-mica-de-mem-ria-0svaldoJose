#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C, i, j;

    scanf("%d %d", &L, &C);

    if (L == 0 || C == 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    int **matriz = malloc(L * sizeof(int*));
    if (matriz == NULL) {

        return 1;
    }

    for (i = 0; i < L; i++) {
        matriz[i] = malloc(C * sizeof(int));
        if (matriz[i] == NULL) {

            return 1;
        }
    }

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d", matriz[i][j]);
            if (j < C - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < L; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
