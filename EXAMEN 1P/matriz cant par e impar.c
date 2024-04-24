# include <stdio.h>
# include <stdlib.h>
#include <time.h>

int main(){
    int f,c,i,j;
    int par, impar;

    printf("\nIngrese la dimension de la matriz \nfila:");scanf("%d",&f);
    printf("columna: ");scanf("%d",&c);

    int matriz[f][c];

    par = 0;
    impar = 0;

    for( i=0 ; i<f ; i++ ){
        for( j=0 ; j<c ; j++ ){
            matriz[i][j] = 1+rand()%99;
            printf("%d ",matriz[i][j]);

            if(matriz[i][j]%2==0){
                par++;
            } else {
                impar++;
            }

        }
        printf("\n");
    }

    printf("\n\nCant. par: %d",par);
    printf("\nCant. impar: %d",impar);

    return 0;
}
