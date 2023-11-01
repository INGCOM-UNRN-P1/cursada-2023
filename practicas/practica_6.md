# TP6-2023

Archivos y argumentos por línea de comandos

## Forma de entrega

* Cada archivo debe seguir la estructura indicada dentro de `plantilla.c`, la cual debe
  estar completa con su nombre y usuario de GitHub.
* La prolijidad cuenta.
* No mezclen tabuladores y espacios en la indentación.
* En ningún caso se aceptara el uso de variables globales. Toda la información 
  necesaria para el funcionamiento de las funciones a desarrollar tienen que ser
  pasado como argumentos de las mismas.
* Cada funcion implementada debe contar con un comentario sobre su prototipo que describa:
  * Las pre y poscondiciones de cada funcion implementada de forma coloquial
  * La descripción de los argumentos que recibe
  * La descripción de los valores que retorna.  
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de commit deben ser descriptivos, nada de "cambios"
* Para que sea mas facil de trabajar, cada punto debiera estar en un archivo separado.

# Ejercicios

## Preparativos

Con el objetivo de analizar el tiempo de ejecución de los algoritmos que implementaran en el practico siguiente y reducir la interferencia de partes del programa que no son específicamente parte de la búsqueda, vamos a implementar un conjunto de programas independientes.

## Errores o situaciones especiales a tener en cuenta
Esta es una lista no exhaustiva sobre las situaciones a las que sus funciones y programas deben de estar preparados.

* Como el tamaño del arreglo que será utilizado para trabajar tiene un tamaño fijo, un error a gestionar y reportar es el que el programa se queda sin espacio suficiente para cumplir con su tarea.
* Los punteros de los arreglos pueden ser `NULL`
* Los archivos pueden fallar (en especial cuando estan escribiendo)
* Las dimensiones pasadas a las funciones pueden ser incorrectas.

### ¿Cómo son los archivos?

La idea es trabajar con archivos que contengan números enteros, uno por línea, en donde el primer número, es la cantidad de números que contiene el archivo.

La idea es trabajar con archivos que contengan números enteros, uno por línea, en donde el primer número, es la cantidad de números que contiene el archivo.

```shell
$> cat archivo_numeros.txt
5
3
-5
3
6
3
```

Usen esta forma de guardar números así podemos intercambiar algoritmos más adelante.

### esta_ordenado?

Implementar la función `esta_ordenado` que dado un conjunto de números, indique: 

- Sí está o no ordenado y

- En qué sentido lo está (ascendente o descendente).

El programa que hace uso de esta función debe de aceptar el nombre de archivo por línea de comandos y mostrar por pantalla (y retornar el código de salida)

```shell
$> ./esta_ordenado archivo_numeros.txt
Si - ascendente
$> echo $? 1
```

Utilizen como código de retorno, `-1` descendente,`0`  no ordenado y `1` como ordenado de forma ascendente.

### ordena

Aprovechando la funció de ordenamiento del TP2, construyan un programa que permita cargar y ordenar un archivo con números.

```
$> ./esta_ordenado archivo_numeros.txt
No
$> ./ordena archivo_numeros.txt asc archivo_ordenado.txt
$> ./esta_ordenado archivo_ordenado.txt
Si - ascendente
```

Este es un ejemplo, en el que primero va el archivo de entrada, luego va el sentido en el que se ordenará y finalmente donde será guardado el resultado.

### generador_lineal

El objetivo de este programa es la generación de archivos con números enteros consecutivos, en donde el programa debe recibir la cantidad de números a generar junto al valor inicial y paso.

```shell
$> ./generador_lineal archivo_numeros.txt 10000 -100 2
Generando archivo_numeros.txt
Con 10000 numeros desde -100 aumentando de a 2
```

En este ejemplo, se creará el archivo `archivo_numeros.txt` con `10000` números a partir de `-100` de forma ascendente

El signo de este argumento indica la dirección en la que se generan los números.

### generador_aleatorio

El objetivo de este programa es la generación de archivos con números enteros al azar, en donde debemos indicar la cantidad de números a generar junto a su rango (mínimo y máximo)

```shell
$> ./generador_aleatorio archivo_numeros.txt 10000 -100 100
Generando archivo_numeros.txt
Con 10000 numeros entre -100 y 100
```

En este ejemplo, se creará el archivo archivo_numeros.txt con 10000 números entre -100 y 100.

#### Para generar números aleatorios
Es necesario contar con estas librerias
```C
#include <time.h>
#include <stdlib.h>
```
Y en la función que genera el número en sí:
```C
srand(time(NULL));                        // La inicialización, debiera ser llamado una sola vez.
int random_number = rand() % max + min;   // Devuelve un numero aleatorio entre min y max
```
(No es la _mejor_ forma de generarlo pero si es simple)
