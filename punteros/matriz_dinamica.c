/*
 * Programa que asigna memoria y valores a una matriz cuadrada.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamaño = 5;
    int **matriz = (int **)malloc(tamaño * sizeof(int *));

    for (int i = 0; i < tamaño; i++) {
        matriz[i] = (int *)malloc(tamaño * sizeof(int *));
        if (matriz[i] == NULL) {            
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }
    printf("Memoria asignada\n");

    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            printf("matriz[%d][%d]: ", i, j);
            matriz[i][j] = i + j;
            printf("%d\n", matriz[i][j]);
        }
    }
    printf("Valores asignados\n");

    for (int i = 0; i < tamaño; i++) {
        free(matriz[i]);
    }
    free(matriz);
    printf("Memoria liberada\n");
    return 0;
}