/*
 * Programa que transforma un número entero interpretado como decimal (con 1s y 0s) a
 * su valor decimal.
 *
 * Se asume que el número decimal proporcionado está conformado por 1s y 0s.
 */
#include <stdio.h>

int binario_a_decimal(int bin) {
    int dec = 0;

    // Inicio en base 2^0 = 1
    int base = 1;
    
    while (bin) {
        // Se extraen los dígitos del número binario con módulo 10
        int ultimo_bit = bin % 10;
        bin = bin / 10;

        // Se aumenta el número decimal agregando la potencia de 2 correspondiente
        dec += ultimo_bit * base;

        // Se aumenta la potencia de la base
        base *= 2;
    }

    return dec;
}

int main() {
    int num = 11111011;
    printf("%d\n", binario_a_decimal(num));

    return 0;
}