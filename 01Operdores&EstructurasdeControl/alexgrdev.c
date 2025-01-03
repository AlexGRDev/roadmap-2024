#include <stdio.h>

int main() {
    // Operadores Aritméticos
    int a = 10, b = 3;
    printf("Aritméticos:\n");
    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicación: %d\n", a * b);
    printf("División: %d\n", a / b);
    printf("Módulo: %d\n", a % b);
    a++;
    printf("Incremento: %d\n", a);
    b--;
    printf("Decremento: %d\n", b);

    // Operadores de Comparación
    printf("\nComparación:\n");
    printf("Igualdad: %d\n", a == b);
    printf("Diferente: %d\n", a != b);
    printf("Mayor que: %d\n", a > b);
    printf("Menor que: %d\n", a < b);
    printf("Mayor o igual: %d\n", a >= b);
    printf("Menor o igual: %d\n", a <= b);

    // Operadores Lógicos
    int x = 1, y = 0;
    printf("\nLógicos:\n");
    printf("AND: %d\n", x && y);
    printf("OR: %d\n", x || y);
    printf("NOT x: %d\n", !x);
    printf("NOT y: %d\n", !y);

    // Operadores de Asignación
    int z = 5;
    printf("\nAsignación:\n");
    z += 3;
    printf("Suma acumulada: %d\n", z);
    z -= 2;
    printf("Resta acumulada: %d\n", z);
    z *= 2;
    printf("Multiplicación acumulada: %d\n", z);
    z /= 3;
    printf("División acumulada: %d\n", z);
    z %= 2;
    printf("Módulo acumulado: %d\n", z);

    // Operadores de Identidad
    printf("\nIdentidad:\n");
    printf("Identidad: %d\n", (a == b));
    printf("No identidad: %d\n", (a != b));

    // Operadores de Pertenencia (en C esto no es nativo, pero podemos usar una lista y verificar)
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 20) {
            found = 1;
            break;
        }
    }
    printf("\nPertenencia: %d\n", found);

    // Operadores de Bits
    int p = 5, q = 3;
    printf("\nOperadores de Bits:\n");
    printf("AND: %d\n", p & q);
    printf("OR: %d\n", p | q);
    printf("XOR: %d\n", p ^ q);
    printf("NOT: %d\n", ~p);
    printf("Desplazamiento a la izquierda: %d\n", p << 1);
    printf("Desplazamiento a la derecha: %d\n", p >> 1);

    // Reto Extra: Números entre 10 y 55, pares, no el 16 ni múltiplos de 3
    printf("\nReto Extra:\n");
    for (int i = 10; i <= 55; i++) {
        if (i % 2 == 0 && i != 16 && i % 3 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
