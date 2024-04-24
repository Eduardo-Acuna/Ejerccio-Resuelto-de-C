# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(){
    int f,c;
    int i,j,k,aux;

    printf("FILA: ");scanf("%d",&f);
    printf("COLUMNA: ");scanf("%d",&c);

    int mat[f][c];

    srand(time(NULL));
    for( i=0 ; i<f ; i++ ){
        for( j=0 ; j<c ; j++ ){
            mat[i][j] = 10+rand()%20;
        }
    }


    printf("LA MATRIZ ORIGINAL\n");
    for( i=0 ; i<f ; i++ ){
        printf("\n+");
        for (k=0 ; k<c ; k++ ){
                printf("----+");
        }
        printf("\n|");
        for( j=0 ; j<c ; j++){
            if( mat[i][j]<10){
                printf(" 0%d |",mat[i][j]);
            } else {
                printf(" %d |",mat[i][j]);
            }
        }
    }
    printf("\n+");
    for (k=0 ; k<c ; k++ ){
        printf("----+");
    }




    for( i=0 ; i<f ; i++ ){
        for( j=0 ; j<c ; j++ ){
            for( k=0 ; k<c ; k++ ){
                if(mat[i][j]<mat[i][k]){
                    aux=mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = aux;
                }
            }
        }
    }

    printf("\nLA MATRIZ ORDENADA\n");
    for( i=0 ; i<f ; i++ ){
        printf("\n+");
        for (k=0 ; k<c ; k++ ){
                printf("----+");
        }
        printf("\n|");
        for( j=0 ; j<c ; j++){
            if( mat[i][j]<10){
                printf(" 0%d |",mat[i][j]);
            } else {
                printf(" %d |",mat[i][j]);
            }
        }
    }
    printf("\n+");
    for (k=0 ; k<c ; k++ ){
        printf("----+");
    }

    return 0;
}



