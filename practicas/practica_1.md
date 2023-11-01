# TP1-2023

El objetivo de esta práctica es que comiencen a programar en C, aprovechando que tienen resueltos estos ejercicios.

## Forma de entrega

* Cada punto debe ser entregado en un archivo independiente
* El nombre de cada archivo debe ser `ejercicio` seguido 
del número de ejercicios más `.c`, de esta manera, el primer ejercicio será entonces `ejercicio1.c`.
* Cada archivo debe seguir la estructura indicada dentro de `plantilla.c`, la cual debe estar completa con su nombre y usuario de GitHub. 
* En ningún caso se aceptará el uso de variables globales. Toda la información 
necesaria para el funcionamiento de las funciones a desarrollar tienen que ser
pasado como argumentos de las mismas.
* Indiquen las precondiciones y poscondiciones de su algoritmo.
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como “cambios”.
* Eviten _siempre que sea posible_ emplear la librería estándar de C.

## Ejercicios

### 1. Hola Mundo

Desarrollar un programa que muestre por STDOUT el mensaje "Hola Mundo".

Indicar en un comentario la instrucción de compilación con GCC por línea de comandos.

### 2. Conversión de temperaturas

Se quiere transformar temperaturas en grados Fahrenheit a grados centígrados y viceversa.

Implementar las funciones para convertir la temperatura en grados centígrados en Fahrenheit como 
un número decimal, utilice esta fórmula para calcular los grados centígrados y retorne el resultado obtenido. Y viceversa.

```C
float centigrados_a_fahrenheit(float centigrados);
float fahrenheit_a_centigrados(float fahrenheit);
```
### 3. Números positivos y negativos

Implementar una función que reciba un número entero e indique si el mismo es positivo, negativo o cero.

``` C
int signo(int numero);
```
 * Retornar `-1` si es negativo.
 * Retornar `0` si es cero.
 * Retornar `1` si es positivo.

### 4. Comparación de números

Implementar una función que retorne:

 * Retornar `-1` si el primero es menor que el segundo
 * Retornar `0` si son iguales
 * Retornar `1` si el primero es mayor que el segundo
 
``` C
int compara(int numero, int otro_numero):
```

### 5. Suma lenta

Implementar una función que haga la suma entre dos números enteros sin hacer la operación de manera directa. Esto quiere decir que para hacer la suma entre 4 y 3, las operaciones 
resultantes deberán ser 4+1+1+1.

La función debe ser capaz de sumar cualquier número entero, positivo y negativo.

``` C
int suma_lenta(int numero, int otro_numero);
```

### 6. Divisiones
Escribir una función que, mediante restas sucesivas, obtenga el valor del 
cociente y el resto de dos números enteros.

``` c
int division_lenta(int dividendo, int divisor);

int cociente_lento(int dividendo, int divisor);
```

### 7. Números primos
Escribir una función que retorne `1` si un número entero indicado es Primo y `0` cuando no lo sea.

``` C
int es_primo(int numero);
```
Un número es primo cuando sus divisores son solo si mismo y 1.

`7` que es primo, es divisible por `7` y `1`.
`8` que no es primo, es divisible por `8` , `4`, `2` y `1`.

### 8. Suma en rango
Implementar una función que sume los números enteros comprendidos entre dos cotas.

Siendo `n` inclusive y `m` no inclusive.
```c
int suma_rango(int n, int m);
```

### 9. Múltiplos de
Escribir una función que retorne `1` si un número entero es múltiplo de otro, utilizando sumas y restas.

``` C
int es_multiplo(int numero, int multiplo);
```

### 10. Factorial

Implementar una función que, usando lazos, permita obtener el factorial de un número entero positivo.

``` C
long factorial(int numero):
```
El factorial de un entero positivo `n`, se define como el producto de todos los números enteros positivos desde `1` (es decir, los números naturales) hasta `n`. 

Por ejemplo: 
5! = 1×2×3×4×5 = 120

### 11. Contador circular

Implementar una función que dado un número entero y un límite, retorne el número incrementado en `1` hasta el límite.
```c
int contador_circular(int i, int limite);
```
Cuando `i == limite`, la función retornará `0`.

