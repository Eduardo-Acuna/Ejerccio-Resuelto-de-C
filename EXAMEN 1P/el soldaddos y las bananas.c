/*
El Soldado y las Bananas
Un soldado quiere comprar w bananas en una tienda. Tiene que pagar k dólares por la primera
banana,2k por la segunda y así consecutivamente (en otras palabras, tiene que pagar i∗k
dólares por la i-ésima banana).
El soldado tiene n dólares. ¿Cuántos dólares debe prestar de su compañero para comprar w
bananas?.
Entrada
La primera línea contiene tres enteros positivosk,n,w(1≤k,w≤1000,0≤n≤109), el costo de la
primera banana, el número de dólares que tiene el soldado y el número de bananas que quiere
comprar.
Salida
Imprimir un entero, el número de dólares que el soldado debe prestar de su amigo. Si no debe
prestar dinero, imprimir 0.
EJEMPLOS
Entrada:
3 17 4
Salida:
13
*/

#include <stdio.h>

int main(){
    int k,w,n;
    int resultado,precio_banana,i;

    scanf("%d",&k);
    scanf("%d",&n);
    scanf("%d",&w);

    if( k<1 || k>1000 || w<1 || w>1000 || n<0 || n>1000000000){
            //printf("Fin");
        return 0;
    }
    precio_banana =0;



    for( i=1 ; i<=w ; i++){
        precio_banana = precio_banana + i*k;
        printf("\n%d banana\nsuma:%d",i,precio_banana);
    }

    resultado = precio_banana - n;

    printf("\n\nDebe prestar:%d",resultado);



    return 0;
}

