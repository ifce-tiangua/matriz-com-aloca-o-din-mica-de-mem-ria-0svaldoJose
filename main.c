#include <stdio.h>
#include <stdlib.h>

void mostraMatriz(int **matriz, int linhas, int colunas);

int main(){

    int **vet, linha, coluna;
    int i, j;

    scanf("%d",&linha);
    scanf("%d",&coluna);

    if(linha <= 0 || coluna <= 0){

        printf("[matriz vazia]\n");

        return 0;

    }

    vet = (int**) malloc(linha*sizeof(int*));

    for(i=0; i<linha; i++){

        vet[i] = (int*) malloc(coluna*sizeof(int));

    }

    for(i=0; i<linha; i++){

        for(j=0; j<coluna; j++){

            scanf("%d",&vet[i][j]);

        }

    }

    mostraMatriz(vet, linha, coluna);

    for(i=0; i<linha; i++){

        free(vet[i]);        

    }
    free(vet);

    return 0;
}

void mostraMatriz(int **matriz, int linhas, int colunas){

    int i, j;


    for(i=0; i<linhas; i++){
    
        for(j=0; j<colunas; j++){

            printf("%d", matriz[i][j]);
            if(j < colunas-1){

                printf(" ");

            }
                 
        }
        
        printf("\n");

    }  

}
