/*KEVIN Y LOS NÚMEROS LINDOS 2024-1
Kevin ama cuando los números son lindos. Y él sabe que un número es lindo si
el mismo es entero positivo cuya representación decimal contiene sólo los
dígitos 4 y 7. Por ejemplo 77, 44, 744 son números lindos, pero 5, 17 y 467 no lo
son.
Desafortunadamente, no todos los números son totalmente lindos, Kevin llama
a un número totalmente lindo solo si el número de dígitos lindos es un numero
lindo en si (4 y 7). Escriba un algoritmo para determinar si un número n
es lindo o totalmente lindos para Kevin o no.

Entrada:
Una única línea que contiene un número entero n (0 < n <231)
Salida:
Imprimir "SI" si el número es lindo o totalmente lindo para Kevin y "NO" en
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

// Función para verificar si un número es lindo
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

// Función para contar la cantidad de dígitos lindos en un número
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

// Función para verificar si un número es totalmente lindo
int esTotalmenteLindo(int num) {
    int cantidad = contarDigitosLindos(num);
    return esLindo(cantidad);
}

int main() {
    int n;

    // Leer la entrada
    scanf("%d", &n);

    // Verificar si el número es lindo o totalmente lindo
    if (esLindo(n) || esTotalmenteLindo(n)) {
        printf("SI\n");
    } else {
        printf("NO\n");
    }

    return 0;
}



