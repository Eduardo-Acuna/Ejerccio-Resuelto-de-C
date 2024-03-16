/*KEVIN Y LOS N�MEROS LINDOS 2024-1
Kevin ama cuando los n�meros son lindos. Y �l sabe que un n�mero es lindo si
el mismo es entero positivo cuya representaci�n decimal contiene s�lo los
d�gitos 4 y 7. Por ejemplo 77, 44, 744 son n�meros lindos, pero 5, 17 y 467 no lo
son.
Desafortunadamente, no todos los n�meros son totalmente lindos, Kevin llama
a un n�mero totalmente lindo solo si el n�mero de d�gitos lindos es un numero
lindo en si (4 y 7). Escriba un algoritmo para determinar si un n�mero n
es lindo o totalmente lindos para Kevin o no.

Entrada:
Una �nica l�nea que contiene un n�mero entero n (0 < n <231)
Salida:
Imprimir "SI" si el n�mero es lindo o totalmente lindo para Kevin y "NO" en
caso contrario.

Ejemplos:
Entrada:
40047
Salida
NO
Entrada
7747774
Salida
SI*/

#include <stdio.h>

// Funci�n para verificar si un n�mero es lindo
int esLindo(int num) {
    while (num > 0) {
        int digito = num % 10;
        if (digito != 4 && digito != 7) {
            return 0; // No es lindo
        }
        num /= 10;
    }
    return 1; // Es lindo
}

// Funci�n para contar la cantidad de d�gitos lindos en un n�mero
int contarDigitosLindos(int num) {
    int contador = 0;
    while (num > 0) {
        int digito = num % 10;
        if (digito == 4 || digito == 7) {
            contador++;
        }
        num /= 10;
    }
    return contador;
}

// Funci�n para verificar si un n�mero es totalmente lindo
int esTotalmenteLindo(int num) {
    int cantidad = contarDigitosLindos(num);
    return esLindo(cantidad);
}

int main() {
    int n;

    // Leer la entrada
    scanf("%d", &n);

    // Verificar si el n�mero es lindo o totalmente lindo
    if (esLindo(n) || esTotalmenteLindo(n)) {
        printf("SI\n");
    } else {
        printf("NO\n");
    }

    return 0;
}



