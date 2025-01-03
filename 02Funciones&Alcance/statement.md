# Ejercicio: Funciones Básicas y Variables

## Descripción
En este ejercicio aprenderás a:
1. Crear funciones básicas en C que representen las diferentes posibilidades del lenguaje.
2. Implementar funciones con y sin parámetros, con y sin retorno, y explorar funciones dentro de funciones.
3. Comprobar el uso de variables **locales** y **globales**.
4. Imprimir por consola el resultado de cada ejemplo para observar su comportamiento.

### Dificultad Extra (Opcional)
Crea un programa que reciba dos parámetros de tipo cadena de texto y retorne un número. La función debe imprimir los números del 1 al 100 con las siguientes condiciones:
- Si el número es múltiplo de 3, imprime la primera cadena de texto.
- Si el número es múltiplo de 5, imprime la segunda cadena de texto.
- Si el número es múltiplo de 3 y 5, imprime ambas cadenas concatenadas.
- La función retorna el número de veces que se ha impreso el número en lugar de las cadenas de texto.

Este reto te ayudará a reforzar el manejo de funciones, parámetros, retornos, y variables en C.

---

## Parte 1: Funciones Básicas
Crea ejemplos de funciones que representen las siguientes posibilidades:

### 1. Funciones sin parámetros ni retorno
- Crea una función que imprima un mensaje simple, como "Hola, Mundo".

### 2. Funciones con uno o varios parámetros
- Crea una función que reciba dos parámetros enteros y retorne su suma.

### 3. Funciones con retorno
- Crea una función que reciba dos parámetros y retorne el valor de su multiplicación.

### 4. Funciones dentro de funciones
- Verifica si puedes llamar a una función dentro de otra.

### 5. Variables locales y globales
- Usa una variable global y una variable local dentro de una función para ver cómo interactúan.

---

## Parte 2: Reto Extra
Crea un programa que:
1. Imprima los números del 1 al 100.
2. Para los números múltiplos de 3, imprime la cadena "Fizz".
3. Para los números múltiplos de 5, imprime la cadena "Buzz".
4. Para los números múltiplos de 3 y 5, imprime "FizzBuzz".
5. Retorna el número de veces que se imprimió un número en lugar de las cadenas.

**Ejemplo esperado:**
```plaintext
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
...
