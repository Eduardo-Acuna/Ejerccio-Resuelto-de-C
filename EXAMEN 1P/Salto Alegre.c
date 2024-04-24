/*
Saltadora Alegre
Una secuencia de n>0 enteros es una saltadora alegre si los valores absolutos de las
diferencias entre elementos sucesivos toman todos los valores de 1 a n−1.
Por ejemplo:
n=5
s=4,3,−1,−3,0
Los valores absolutos de las diferencias son:
1,4,2,3
Vemos que todos los valores del 1 al 5−1 (o sea, 1,2,3,4 están presentes, por lo tanto, la
secuencia s dada es una saltadora alegre.
La definición implica que cualquier secuencia de longitud igual a 1 es una saltadora alegre.
Tendrás que escribir un programa que determine si una secuencia dada es una saltadora alegre.
Entrada
La primera línea contiene un entero n (1≤n≤3000), la longitud de la secuencia.
La segunda línea contiene n enteros a1,a2,…,an(0≤|ai|≤10000), los números de la
secuencia.
Salida
Imprimir 'Alegre' o 'No Alegre'
*/

# include <stdio.h>

int main(){
    int n,i, aux;

    printf("n: ");
    scanf("%d",&n);
    if( n<1 || n>3000){
        return 0;
    }

    int vector[n],frecuencia[n],diferencia[n];

    printf("VECTOR:  ");

    for( i=0 ; i<n ; i++ ){
        scanf("%d",&vector[i]);
        if(vector[i]>10000){
            return 0;
        }
    }


    printf("\nDIFERENCIA:  ");
    for( i=0 ; i<n-1 ; i++ ){
        diferencia[i] =vector[i]-vector[i+1];
        if(diferencia[i]<0){
            diferencia[i]=diferencia[i]*-1;
        }
        printf("\n%d-%d = %d",vector[i],vector[i+1],diferencia[i]);
    }


    printf("\n\nDIFERENCIA:  ");
    for( i=0 ; i<n-1 ; i++ ){
        if(diferencia[i]>diferencia[i+1]){
            aux = diferencia[i];
            diferencia[i]=diferencia[i+1];
            diferencia[i+1] = aux;
        }
    }
    for( i=0 ; i<n-1 ; i++ ){
        printf("%d ",diferencia[i]);
    }

    printf("\nFRECUENCIA 'n':  ");
    for( i=0 ; i<n-1 ; i++ ){
        frecuencia[i]=1+i;
        printf("%d ",frecuencia[i]);
    }


    for( i=0 ; i<n-1 ; i++ ){
        if(diferencia[i]!=frecuencia[i]){
            printf("\n\nNo Alegre");
            return 0;
        }
    }

    printf("\n\nAlegre");

    return 0;
}
