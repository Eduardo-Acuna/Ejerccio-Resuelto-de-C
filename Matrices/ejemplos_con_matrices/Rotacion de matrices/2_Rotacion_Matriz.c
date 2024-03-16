# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define F 10
# define C 10

void cargar_mat(int mat[F][C], int d);
void mostar_mat(int mat[F][C], int d);
void rotar_mat(int mat[F][C],int d);


int main(){

    int mat[F][C];
    int a;

    printf("Ingrese la dimenesio para la matriz cuadrada: ");
    scanf("%d",&a);

    printf("\nLA MATRIZ 'A' ES:");
    cargar_mat(mat,a);
    mostrar_mat(mat,a);

    printf("\nLA MATRIZ 'A' ROTADA ES:");
    rotar_mat(mat,a);
    mostrar_mat(mat,a);

    return 0;
}


void rotar_mat(int mat[F][C],int d){
    int i,j,aux1, aux2;

    //TRANSPONER LA MATRIZ
    for( i=0 ; i<d ; i++ ){
        for( j=i+1 ; j<d ; j++){
            aux1 = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = aux1;
        }
    }

    //INVERTIRA LA FILA
    for( i=0 ; i<d ; i++ ){
        for( j=0 ; j<d/2 ; j++ ){
            aux2 = mat[i][j];
            mat[i][j] = mat[i][d-1-j];
            mat[i][d-1-j] = aux2;
        }
    }
}


void cargar_mat(int mat[F][C], int d){
    int i,j;

    srand(time(NULL));

    for( i=0 ; i<d ; i++){
        for( j=0 ; j<d ; j++){
            mat[i][j] = 1 + rand() % 4;
        }
    }
}

void mostrar_mat(int mat[F][C], int d){
    int i,j,k;

    for( i=0 ; i<d ; i++){
        printf("\n+");
        for( k=0 ; k<d ; k++){
            printf("---+");
        }

        printf("\n| ");

        for( j=0 ; j<d ; j++){
            printf("%d | ",mat[i][j]);
        }
    }

    printf("\n+");

    for( i=0 ; i<d ; i++){
        printf("---+");
    }
}


