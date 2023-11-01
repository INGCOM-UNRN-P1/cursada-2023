
# TP4-2023

El objetivo de esta práctica es ejercitar el uso de punteros.

## Forma de entrega
* El nombre de cada archivo debe ser `ejercicio` seguido del número de ejercicios más `.c`, de esta manera, el primer ejercicio será entonces `ejercicio1.c`.
* Cada archivo debe seguir la estructura indicada dentro de `plantilla.c`, la cual debe estar completa con su nombre y usuario de GitHub. 
* En ningún caso se aceptará el uso de variables globales. Toda la información necesaria para el funcionamiento de las funciones a desarrollar tienen que ser pasado como argumentos de las mismas.
* Indiquen las precondiciones y poscondiciones de sus funciones.
* Mantengan separado lo que es entrada, del algoritmo y la salida.
* Siempre que sea posible, los mensajes de confirmación de `git` deben ser descriptivos, evitando los que son como “cambios”.
* Eviten _siempre que sea posible_ emplear la librería estándar de C.
* No olviden documentar las funciones implementadas indicando el propósito de los argumentos y que es lo que retorna.

## Ejercicios

### Ejercicio 1

Escriba un programa corto en `C` (no hace falta que este resuelto con funciones) que declare e inicialice a cualquier valor deseado, sin ser necesario que sea ingresado por el usuario, variables de tipo `double`, `int` y `char`.  A continuación, declare e inicialice un puntero a cada una de las tres variables. Su programa debe imprimir la dirección y el valor almacenado y el tamaño de la memoria (en bytes) de cada una de las seis variables.

Utilice el especificador de formato "%p" para imprimir direcciones de punteros (las cuales están en hexadecimal). 

Para obtener los tamaños en memoria de las variables, utilice el 
operador `sizeof` para determinar el tamaño de memoria 
asignado para cada variable.

Para armar la salida en columnas, pueden usar tabuladores `\t` en el string del `printf`.

**Salida esperada**

```
La direccion del char			____ es 0x______
La direccion del int			____ es 0x______
La direccion del double			____ es 0x______
La direccion del char*			____ es 0x______
La direccion del int*			____ es 0x______
La direccion del double*		____ es 0x______

La valor del char				____ es   ______
La valor del int			    ____ es   ______
La valor del double				____ es   ______
La valor del char*				____ es 0x______
La valor del int*				____ es 0x______
La valor del double*			____ es 0x______

El tamaño del char				es ______ bytes
El tamaño del int				es ______ bytes
El tamaño del double			es ______ bytes
El tamaño del char*				es ______ bytes
El tamaño del int*				es ______ bytes
El tamaño del double*			es ______ bytes
```
La notación `0x` se utiliza para indicar que el número a continuación está en base 16, hexadecimal. De la misma manera que los literales
para números enteros en esta base.

En donde el primer espacio es para el nombre de la variable

### Ejercicio 2 - Ordenamiento II

Implementar una función que, en el ordenamiento de arreglos de números enteros, haga uso de la función.
```C
void intercambia(int* izquierda, int* derecha);
```
Para hacer los movimientos de los valores en el arreglo en lugar de hacer las asignaciones entre las posiciones.

### Ejercicio 3 - Duplica

Duplicar el valor de una variable usando punteros

### Ejercicio 4 - División lenta II

Implementar una única función que obtenga el cociente y resto de dos números enteros.

### Ejercicio 5 - Estadísticas

Implementar una única función que obtenga el mínimo, máximo, suma y promedio de un arreglo.

### Ejercicio 6 - Intercambio de caracteres

Intercambiar dos caracteres en una misma cadena segura.
```c
int intercambia(char cadena[], int capacidad_cadena, int origen, int destino);
```

### Ejercicio 7 - Largo seguro II

Encontrar la longitud de una cadena segura empleando aritmética de punteros y sin usar el operador de arreglos `[]`.

```c
int largo_seguro(char *str, int capacidad_cadena);
```

### Ejercicio 8 - Búsqueda

Implementar una función que retorne el puntero relativo a una cadena segura, en donde se encuentre la primera ocurrencia de una segunda.

Retornen `NULL` si no se encuentra.

```c
char* busqueda(char cadena[], int capacidad_cadena, char busqueda[], int capacidad_busqueda);
```

### Ejercicio 9 - Elimina duplicados

Implementar una función que elimine los duplicados de un arreglo, retornando el nuevo tamaño.

### Ejercicio 10 - Reemplazo

Implementar una función que reemplace las vocales de una cadena segura reemplazándolas por un carácter indicado.

### Ejercicio 11 - Inversión

Invertir el orden de los elementos presentes en un arreglo
```c
int invertir(int arreglo[], int tamaño);
```
