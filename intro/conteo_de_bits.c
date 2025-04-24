/*
 * Programa que cuenta cuántos bits en 1 hay en un número ingresado por el usuario
 */

#include <stdio.h>

// Función para contar cuántos bits en 1 hay en un entero sin signo 'num'
int conteo_de_unos(unsigned int num) {
    int conteo = 0;

    // Un bucle while evalúa si 'num' es diferente de 0
    // Cuando 'num' es 0, sabemos que ya no hay bits en 1
    while (num) {
        // Se incrementa el contador cada vez que el último bit de 'num' es 1
        // Ej: 10011011 & 1 
        conteo += num & 1;

        // Se hace un shift right a la variable 'num'
        // Así, en la sigiente iteración, se evaluará el nuevo último bit de 'num'
        num >>= 1;
    }
    return conteo;
}

int main() {
    unsigned int num = 806127;
    printf("num: %b, bits en 1: %d\n", num, conteo_de_unos(num));
}