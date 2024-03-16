/*Realizar un programa que lea una matriz de 3x3 números de tipo float y calcule una segunda
matriz transpuesta de la primera. A continuación se debe mostrar en pantalla primero la
matriz transpuesta y segundo la matriz original.*/

#include <stdio.h>

int main() {
    int i, j;
    float matriz[3][3];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Introduzca valor [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ ORIGINAL\n");
    printf("****************\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ TRASPUESTA\n");
    printf("******************\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
