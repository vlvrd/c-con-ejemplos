#include <stdio.h>

int main() {
    int num;
    
    // Preguntamos al usuario por un número positivo
    // El bucle do-while espera hasta que 'num' guarde un número positivo
    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    return 0;
}