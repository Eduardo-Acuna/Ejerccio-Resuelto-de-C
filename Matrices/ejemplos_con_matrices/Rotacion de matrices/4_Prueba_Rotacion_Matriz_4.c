/*
Examen de Matrices en Programaci�n

Instrucciones:

Este examen consta de varias preguntas relacionadas con la manipulaci�n de matrices en programaci�n.
Responde cada pregunta de la manera m�s clara y concisa posible.
Puedes usar el lenguaje de programaci�n C para expresar tus respuestas, si es necesario.
Se valorar� tanto la correcci�n de las respuestas como la claridad y la eficiencia del c�digo proporcionado.
Preguntas:

Define una matriz de tama�o 4x4 en el lenguaje de programaci�n C e inicial�zala con valores del 1 al 16.

Escribe una funci�n en C llamada transponerMatriz que reciba como par�metro una matriz cuadrada y la transponga.

Describe c�mo se puede rotar una matriz cuadrada de 3x3 en sentido horario. Proporciona una explicaci�n paso a paso del proceso.

Escribe una funci�n en C llamada rotarBordeMatriz que reciba como par�metro una matriz cuadrada y rote �nicamente los elementos del borde en sentido horario, manteniendo los elementos centrales fijos.

�Cu�l es la complejidad temporal de la funci�n rotarBordeMatriz que escribiste en la pregunta anterior? Justifica tu respuesta.
*/

#include <stdio.h>

#define N 5 // Tama�o de la matriz (5x5 en este caso)

void rotarBordeMatriz(int matriz[N][N]) {
    int temp;
    int i, j;

    // Rotar borde superior
    for (j = 0; j < N - 1; j++) {
        temp = matriz[0][j];
        matriz[0][j] = matriz[N - 1 - j][0];
        matriz[N - 1 - j][0] = matriz[N - 1][N - 1 - j];
        matriz[N - 1][N - 1 - j] = matriz[j][N - 1];
        matriz[j][N - 1] = temp;
    }
}

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    printf("\nRotar borde de la matriz:\n");
    rotarBordeMatriz(matriz);
    imprimirMatriz(matriz);

    return 0;
}



