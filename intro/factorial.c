/*
 * Programa para calcular el factorial de un número entero. El factorial se define como la multiplicación
 * de todos los números enteros contados desde 1 hasta el número al que se le aplica el cálculo.
 * Ej: 5! = 1 * 2 * 3 * 4 * 5 = 120
 * 
 * Este programa no contempla el manejo de error en el cálculo cuando el resultado hace overflow.
 */


#include <stdio.h>

int main() {
    int num;
    
    // Solicitamos al usuario un número positivo
    printf("Ingrese un número positivo: ");
    scanf("%d", &num);

    // Terminamos el programa si el número no es positivo
    if (num < 0) {
        printf("No es positivo\n");
        return 1;
    } else if (num == 0) {
        printf("No hay factorial de 0\n");
        return 1;
    }

    int factorial = 1;
    int contador = 1;

    // Utilizamos 'contador' para salir del bucle cuando iteramos hasta el número factorial
    // En 'factorial' guardamos el resultado del cálculo necesario
    do {
        factorial = contador * factorial;
        contador++;
    } while (contador <= num);

    printf("Factorial: %d\n", factorial);

    return 0;
}