#include <stdio.h>

#define N 3 // Tamaño de la matriz (3x3 en este caso)

void rotarMatriz(int matriz[N][N]) {
    int temp;
    // Transponer la matriz
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
    // Invertir las filas
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[N - 1 - i][j];
            matriz[N - 1 - i][j] = temp;
        }
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
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    printf("\nMatriz rotada:\n");
    rotarMatriz(matriz);
    imprimirMatriz(matriz);

    return 0;
}

