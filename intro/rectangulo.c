/*
 * Programa para calcular el área de un triángulo a partir de sus dos esquinas opuestas.
 *
 * Se utilizan dos structs: Uno para definir 'Punto' en el plano 'xy' (con un punto en 'x' y otro en 'y')
 * y otro para definir 'Rectángulo' con dos 'Punto's en esquinas opuestas del mismo.
 * 
 * El cálculo no considera si el resultado de 'area' es negativo.
 */

#include <stdio.h>

struct Punto
{
    int x;
    int y;
};

struct Rectangulo
{
    struct Punto p1;
    struct Punto p2;
};

void main()
{
    // Definición de puntos arbitrarios para el rectángulo
    struct Rectangulo rectangulo = {{7, 5}, {10, 8}};

    // Cálculo del área del rectángulo a partir del diferencial de los puntos
    int base = rectangulo.p1.x - rectangulo.p2.x;
    int altura = rectangulo.p1.y - rectangulo.p2.y;
    int area = base * altura;

    printf("Área: %d\n", area);

    return;
}