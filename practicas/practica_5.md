
# TP5-2023

Matrices y estructuras.

## Forma de entrega

* El nombre de cada archivo debe ser `ejercicio` seguido del número de ejercicios más `.c`, de esta manera, el primer ejercicio será entonces `ejercicio1.c`. Cuando el ejercicio contiene 'puntos', la idea es que sea un solo archivo.
* Cada archivo debe seguir la estructura indicada dentro de `plantilla.c`, la cual debe estar completa con su nombre y usuario de GitHub. 
* En ningún caso se aceptará el uso de variables globales. Toda la información necesaria para el funcionamiento de las funciones a desarrollar tienen que ser pasado como argumentos de las mismas.
* Indiquen las precondiciones y poscondiciones de sus funciones.
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como “cambios”.
* Eviten _siempre que sea posible_ emplear la librería estándar de C.
* No olviden documentar las funciones implementadas indicando el propósito de los argumentos y que es lo que retorna.

## Ejercicios

### Ejercicio 1 - Enter the matrix
Implementar funciones para operaciones con matrices de números enteros, en un solo archivo y en donde las funciones *pueden* retornar un valor ante los posibles errores que se encuentren.

[Mas información sobre las operaciones](https://www.matesfacil.com/matrices/resueltos-matrices-suma.html)

#### Punto 1 - Mostrar una matriz
Implementar una función que imprima por pantalla una matriz, incluyendo sus dimensiones.

#### Punto 2 - Multiplicación por un escalar. 
El término **multiplicación escalar** se refiere al producto de un número real por una matriz. En la multiplicación escalar, cada entrada en la matriz se multiplica por el escalar dado.
```C
int producto_escalar(int filas, int columnas, int matriz[][], int escalar);
```
#### Punto 3 - Suma de matrices 
La suma de matrices, es solo posible con matrices de las mismas dimensiones, esta operación requiere de un tercer argumento de matriz para almacenar el resultado.

En la suma de matrices, se toma el elemento en la misma ubicación en ambas matrices y se suma, para cada uno de ellos.

```C
int suma_matriz(int filas_1, int columnas_1, int matriz_1[][],
								int filas_2, int columnas_2, int matriz_2[][],
								int filas_r, int columnas_r, int resultado[][]);
```

### Ejercicio 2 - TATETI
Implementar las funciones implementar el juego del Tateti en C. El juego debe permitir que dos jugadores jueguen alternativamente y determinar al ganador o si hay un empate.

**Requisitos:**

1.  El juego se juega en un tablero 3x3, donde los jugadores alternan para colocar sus fichas (uno usa "X" y el otro "O").
2.  El juego debe imprimir el tablero después de cada movimiento y verificar si un jugador ha ganado o si hay un empate.
3.  Debe haber una función para verificar el estado del juego después de cada movimiento y determinar si hay un ganador o si el juego ha terminado en empate.
4.  El juego debe manejar errores, como ingresar una posición ya ocupada o un movimiento inválido.
5.  El juego debe permitir que los jugadores ingresen sus movimientos en el formato "fila columna", por ejemplo, "1 2", pueden usar `scanf("%d %d", &fila, &columna);` que pide dos números separados por un espacio. 
6.  El juego debe preguntar a los jugadores sus nombres al principio y utilizarlos en los mensajes de juego.
7. *Separen lo más posible*, lo que hace funcionar al juego, de lo que interactúa con el usuario, los `printf`/`scanf`.

**Ejemplo de flujo del juego:**
```
¡Bienvenido al juego del Tateti!
Jugador 1, ingresa tu nombre: Juan
Jugador 2, ingresa tu nombre: María

Tablero inicial:
 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

Comienza el juego.

Turno de Juan (X). Ingresa tu movimiento (fila columna): 1 1

Tablero actualizado:
 X | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

Turno de María (O). Ingresa tu movimiento (fila columna): 2 2

Tablero actualizado:
 X | 2 | 3 
-----------
 4 | O | 6 
-----------
 7 | 8 | 9 

...

¡Felicidades, Juan (X)! ¡Has ganado!

¿Quieren jugar otra partida? (S/N): N
¡Gracias por jugar!
```

### Ejercicio 3 - Fracciones
Desarrollar las funciones necesarias para operar con fracciones de números enteros.

```C
typedef struct fraccion{
    int numerador;
    int denominador;
} fraccion_t;
```
Operaciones a implementar:
 * Mostrar una fracción por consola.
 * Suma entre fracciones
 * Multiplicación entre fracciones
 * Suma con un número entero.
 
El `main` para este ejercicio debe utilizar todas estas operaciones.

Este ejercicio no requiere de la utilización de punteros.

### Ejercicio 4 - Gestionando el `tiempo_t`
Desarrollar una estructura y funciones que permitan realizar las siguientes operaciones con 
tiempo expresado en horas, minutos y segundos.

 * Crear `tiempo_t`
 * Mostrar `tiempo_t`
 * Sumar dos `tiempo_t`
 * Comparar dos `tiempo_t`, indicando:
	 * -1 si el primero es más chico
	 * 0 si son iguales
	 * 1 si el primero es más grande

## Ejercicios adicionales

Los ejercicios adicionales son completamente opcionales.

### Ejercicio 4 - División Lenta III
Unificar las funciones de división lenta del TP1 de forma que la función retorne una 
estructura representando los valores posibles. 

Mantengan separado lo que ‘entra’ de lo que sale; dividendo y divisor por un lado, cociente y resto por otro.

Crear las funciones de soporte necesarias como 'mostrar'

### Ejercicio 5 - Arreglos II
Reusando lo que ya tenemos sobre este tema, desarrollar una estructura y funciones de soporte para arreglos, en la que su capacidad y largo están en una estructura.

(Sí, la capacidad es fija, pero volveremos a este ejercicio en el TP siguiente en donde la capacidad puede variar).

Funcionalidad a implementar.
* Cargar
* Mostrar
* Fusionar
* Ordenar

### Cadenas Seguras III
Seguimos reutilizando, desarrollar una estructura y las funciones de soporte para integrar la información de capacidad con las cadenas.

Funcionalidad a implementar.
* Largo
* Mostrar (el `%s` no funciona más)
* Insertar en una posición
* Copiar una cadena en otra.
