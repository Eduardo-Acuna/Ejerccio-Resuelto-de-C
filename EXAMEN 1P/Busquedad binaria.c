# include <stdio.h>
# include <time.h>

int busqueda_binaria(int vector[] , int n , int elemento);

int  main(){
    int a,i;
    printf("Ingrese la dimension para el vector: ");
    scanf("%d",&a);

    int vector[a];
    printf("\nVECTOR = {");
    srand(time(NULL));
    for( i=0 ; i<a ; i++ ){
        vector[i] = 1 + rand()% 200;
        printf(" %d ",vector[i]);
    }
    printf("}");

    int b, indice;
    printf("\nIngrese el elemento que desea buscar: ");
    scanf("%d",&b);

    indice = busqueda_binaria(vector , a , b );

    if( indice == -1){
        printf("\nNO SE ENCUENTRA ESE ELEMENTO");
    } else {
        printf("\nEl numero [%d] se encuentra en el indice: %d ",b, indice);
    }


    return 0;
}


int busqueda_binaria(int vector[] , int n , int elemento){
    int inicio, medio, fin;

    inicio = 0;
    fin = n - 1;

    while( inicio <= fin ){
        medio = inicio + (fin - inicio)/2;

        if( vector[medio] == elemento ){
            return medio;
        } else if( vector[medio] < elemento ){
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}

