/*
 * Programa que ejemplifica cómo utilizar la función 'realloc'
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamaño = 5;

    // Asigno memoria a un arreglo
    int *arreglo = (int *)malloc(tamaño * sizeof(int));

    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria para el arreglo.\n");
        return 1;
    }

    // Lleno el arreglo de valores
    for (int i = 0; i < tamaño; i++) {
        arreglo[i] = i * 10 + i;
    }

    printf("Arreglo antes de realocar:\n");

    // Recorro el arreglo utilizando aritmética de punteros
    for (int i = 0; i < tamaño; i++) {
        printf("%d\n", *(arreglo + i));
    }

    int nuevo_tamaño = 10;

    // Reasigno memoria para arreglo, manteniendo los valores originales
    int *temp = realloc(arreglo, nuevo_tamaño * sizeof(int));
    if (temp == NULL) {
        free(arreglo);
        return 1;
    }
    // Realloc puede regresar una nueva dirección de memoria
    arreglo = temp;

    // Lleno el resto del arreglo con nuevos valores
    for (int i = tamaño; i < nuevo_tamaño; i++) {
        arreglo[i] = i * 10 + 2*i;
    }

    printf("Arreglo después de realocar:\n");

    // Recorro el arreglo aumentado utilizando aritmética de punteros
    for (int i = 0; i < nuevo_tamaño; i++) {
        printf("%d\n", *(arreglo + i));
    }

    free(arreglo);
    return 0;

}