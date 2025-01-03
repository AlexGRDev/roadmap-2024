/*
 * URL del sitio web oficial del lenguaje de programación C:
 * https://en.cppreference.com/w/c
 */

#include <stdio.h>
#include <windows.h>

int main() 
{
   SetConsoleOutputCP(CP_UTF8);
   int numero = 42;
   const float PI = 3.14159;

   char caracter = 'C';
   int entero = 100;
   float decimal = 3.14;
   double dobleDecimal = 2.7182818284;
   _Bool booleano = 1;

   printf("¡Hola, C!\n");
   printf("El número es: %d\n", numero);
   printf("El valor de PI es: %.5f\n", PI);
   printf("Caracter: %c\n", caracter);
   printf("Entero: %d\n", entero);
   printf("Flotante: %.2f\n", decimal);
   printf("Doble: %.10lf\n", dobleDecimal);
   printf("Booleano: %d\n", booleano);
   return 0;
}
