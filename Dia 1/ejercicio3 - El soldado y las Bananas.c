/*
El Soldado y las Bananas

Un soldado quiere comprar w bananas en una tienda. Tiene que pagar k
dólares por la primera banana, 2k por la segunda y así consecutivamente
(en otras palabras, tiene que pagar i∗k dólares por la i-ésima banana).

El soldado tiene n dólares. ¿Cuántos dólares debe prestar de su
compañero para comprar w bananas?.

Entrada
La primera línea contiene tres enteros positivos
k,n,w(1≤k,w≤1000,0≤n≤109), el costo de la primera banana, el número de
dólares que tiene el soldado y el número de bananas que quiere comprar.

Salida
Imprimir un entero, el número de dólares que el soldado debe prestar de
su amigo. Si no debe prestar dinero, imprimir 0.

EJEMPLOS
Entrada:
3 17 4
Salida:
13

*/
#include <stdio.h>

int main() {
    int k, n, w, total, prestamo;
    scanf("%d %d %d", &k, &n, &w);

    if(k<1){
        return 0;
    }else if(w>1000){
        return 0;
    }else if(n<0 || n>109){
        return 0;
    }

    total = (w*(w+1)/2)*k;


    if(total>n) {
        prestamo = total-n;
    }else{
        prestamo = 0;
    }

    printf("%d\n", prestamo);

    return 0;
}


