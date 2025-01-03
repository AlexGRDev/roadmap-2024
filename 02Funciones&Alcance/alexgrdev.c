#include <stdio.h>

int multiplicar(int a, int b) {
    return a * b;
}

void saludar() {
    printf("Hola, mundo!\n");
}

void imprimirNumeros(int limite) {
    for (int i = 1; i <= limite; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int contarMultiples(int limite, const char *texto1, const char *texto2) {
    int contador = 0;
    for (int i = 1; i <= limite; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%s%s\n", texto1, texto2);
            contador++;
        } else if (i % 3 == 0) {
            printf("%s\n", texto1);
            contador++;
        } else if (i % 5 == 0) {
            printf("%s\n", texto2);
            contador++;
        } else {
            printf("%d\n", i);
        }
    }
    return contador;
}

int main() {
    int resultado = multiplicar(5, 6);
    printf("Multiplicación: %d\n", resultado);

    saludar();

    imprimirNumeros(10);

    int veces = contarMultiples(100, "Fizz", "Buzz");
    printf("Se imprimieron los textos %d veces.\n", veces);

    return 0;
}
