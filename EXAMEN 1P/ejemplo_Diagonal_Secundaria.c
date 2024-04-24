# include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
# define D 4

void imprimir_mat(int *mat[][D], int F, int C);
void DP_ordenar_descendente( int *mat[][D], int F, int C);
void DP_ordenar_ascendente(int *mat[][D], int F, int C);
void DS_ordenar( int *mat[][D], int F, int C);

int main(){
    int mat[D][D] = {
        {7,8,20,5},
        {6,32,45,50},
        {78,63,21,2},
        {47,58,9,63}
    };

    printf("\nMatriz original:");
    imprimir_mat(mat,D,D);

    printf("\nMatriz DP ordenada descendente (de MAYOR a MENOR)");
    DP_ordenar_descendente(mat,D,D);
    imprimir_mat(mat,D,D);

    printf("\nMatriz DP ordenada ascendente (de MENOR a MAYOR)");
    DP_ordenar_ascendente(mat,D,D);
    imprimir_mat(mat,D,D);

    system("cls");
    printf("\nMatriz DS)");
    DS_ordenar(mat,D,D);
    imprimir_mat(mat,D,D);




    return 0;
}

void DS_ordenar( int *mat[][D], int F, int C){
    int i,j,aux;

    for( i=0 ; i<F-1 ; i++){
        for( j=C-1 ; j>0 ; j--){
            if( i+j==F-1 && mat[i][j]>mat[i+1][j-1]){
                aux = mat[i][j];
                mat[i][j] = mat[i+1][j-1];
                mat[i+1][j-1] = aux;
            }
        }
    }
}


void DP_ordenar_ascendente(int *mat[][D], int F, int C){
    int i,j,aux;

    for( i=0 ; i<F-1 ; i++){
        for( j=i+1 ; j<C ; j++){
            if( mat[i][i]>mat[j][j]){
                aux = mat[i][i];
                mat[i][i] = mat[j][j];
                mat[j][j] = aux;
            }
        }
    }
}

void DP_ordenar_descendente( int *mat[][D], int F, int C){
    int i, j, aux;

    for( i=0 ; i<F-1 ; i++){
        for( j=0 ; j<C-1-i ; j++){
            if( mat[j][j] < mat[j+1][j+1]){
                aux = mat[j][j];
                mat[j][j] =  mat[j+1][j+1];
                mat[j+1][j+1] = aux;
            }
        }
    }
}



void imprimir_mat(int *mat[][D], int F, int C){
    int i,j,k;

    for( i=0 ; i<F ; i++ ){
        printf("\n+");
        for (k=0 ; k<C ; k++ ){
            printf("----+");
        }
        printf("\n|");
        for( j=0 ; j<C ; j++){
            if( mat[i][j]<10){
                printf(" 0%d |",mat[i][j]);
            } else {
                printf(" %d |",mat[i][j]);
            }
        }
    }
    printf("\n+");
    for (k=0 ; k<C ; k++ ){
        printf("----+");
    }
}
