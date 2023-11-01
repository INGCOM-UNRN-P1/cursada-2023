
# TP7-2023

Archivos y argumentos de programa

## Consideraciones generales

Aparte de las consideraciones presentes en los TP anteriores, sumamos un par nuevas.

* Los TP (al igual que los anteriores) no tienen permitido el uso de variables globales.

* Resuelvan cada ejercicio en un directorio diferente, en donde pueden resolver todo junto, o por separado, como prefieran.

Algo como: 

![imagen](https://github.com/INGCOM-UNRN-P1/TP7-2023/assets/56625/7b0361a1-f7d0-4bd5-9a24-8f9c1377bcaf)

A diferencia de las prácticas anteriores, aquí haremos uso extensivo de las prácticas anteriores, por lo que vamos a ver como reutilizar sin copiar/pegar (y dejar los archivos enormes).

Que a pesar de no ser la forma correcta, es la más simple y nos alcanza a los objetivos del TP. Más adelante, veremos la forma correcta utilizando `makefiles`.

**Para que esto funcione**, los archivos de las prácticas anteriores no pueden contener su función `main`, ya que esto colisionará con el del ejercicio que están resolviendo.
Y si llaman a más de una práctica, los nombres no pueden estar repetidos, incluyendo los de los `#define`.

Luego, en el archivo del ejercicio que estan resolviendo, empleen
```C
#include "practica3.c"
```
Esto inserta el contenido del archivo en ese lugar, es la versión ½ casera de lo que uno usa normalmente en Python.

Cualquier cosa, abran una pregunta en el espacio de discusión, con el enlace al repositorio asi lo revisamos.

## Ejercicios

### Ejercicio 1 - Valores puntuales

Crea una función que reserve memoria para un solo entero y le asigne un valor.

Y una función que extrae el valor y lo retorne; liberando la memoria.

```C
int* reserva_entero(int valor);
int libera_entero(int* valor);
```


Este ejercicio debe hacer algunas operaciones desde la línea de comandos y liberar el valor pedido.

```
$> ./puntuales.exe 2 + 4
6
```

Suma, resta, multiplicación y división. Usando operaciones lentas.
### Ejercicio 2 - Arreglos III

Este ejercicio puede ser combinado con los ejercicios de arreglos del TP3 y TP5.

#### Parte A - Dinámico
Implementa funciones que reserven memoria para un arreglo de enteros de tamaño fijo y luego otra función para liberarla esa memoria.

```C
int* reserva_arreglo_enteros(int tamano);
void libera_arreglo_enteros(int* arreglo);
```

#### Parte B - Duplicadora
Escribe una función que copie un arreglo de enteros en un nuevo arreglo dinámico del mismo tamaño.

```C
int* duplica_arreglo(int* origen, int tamano);
```

#### Parte C - Eliminadora

Crea una función que elimine un elemento en una posición específica de un arreglo dinámico de enteros.

```C
int* elimina_elemento(int* arreglo, int tamano, int posicion);
```

#### Parte D - Inserción

Escribe una función que inserte un elemento en una posición específica de un arreglo dinámico de enteros.

```C
int* inserta_elemento(int* arreglo, int* tamano, int posicion, int valor);
```

#### Parte E - Fusionadora
Escribe una función que realice la fusión (merge) de dos arreglos dinámicos ordenados en orden ascendente.

```C
int* fusiona_arreglos(int* arreglo1, int tamano1, int* arreglo2, int tamano2);
```

### Ejercicio 3 - Cadenas IV

#### Parte A - Concatenación dinámica
Crea una función que concatene dos cadenas de caracteres dinámicas.

```C
char* concatena_cadenas(char* cadena1, char* cadena2);
```
#### Parte B - Deduplicador

Escribe una función que elimine los caracteres  duplicados de una cadena.

```C
int* elimina_duplicados(int* arreglo, int* tamano);
```

#### Parte C - Fraccionador (OPCIONAL y Dificil)
Implementa una función que divida una cadena de caracteres en palabras, separando por espacios `' '` y devuelva un arreglo dinámico de palabras.

```C
char** divide_cadena_en_palabras(char* cadena, int* num_palabras);
```

### Ejercicio 4 - Matrices II - Opcional
Este ejercicio puede ser combinado con lo ya implementado de matrices del TP5.

#### Parte A - Dinámico
Crea una función que reserve memoria para una matriz de enteros de tamaño `m` x `n`.

```C
int** reserva_matriz_enteros(int filas, int columnas);
void libera_matriz_enteros(int** matriz, int filas, int columnas);
```

#### Parte B - Multiplicación de matrices
Crea una función que multiplique dos matrices dinámicas.

```C
int** multiplica_matrices(int** matriz1, int filas1, int columnas1, int** matriz2, int filas2, int columnas2);
```

