#include <stdio.h>

#define N 5 // Tamaño de la matriz (5x5 en este caso)

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

