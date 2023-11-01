# TP8-2023

Introducción a estructuras de datos.

No olviden la documentacion de las funciones.

## Ejercicio 1 - Listas Enlazadas

La estructura de datos llamada "lista enlazada" es como un tren con sus vagones. 
Cada vagon, (un "nodo") contiene información y la conexión al siguiente vagon.

La ventaja de una lista enlazada es que puedes agregar o quitar vagones en cualquier 
punto del tren sin afectar a las demás. Esto la hace útil para gestionar datos de manera dinámica, 
ya que podes agregar vagones simplemente conectandolos al tren, a diferencia de un arreglo 
en el que el tamaño se fija desde el principio.

Es importante destacar, que los arreglos y las listas enlazadas pertencen a la misma clase de estructuras,
Secuencias, esto porque estan pensadas para almacenar un conjunto de elementos homogeneos, que podemos
recuperar por su posición.

Implementar de manera iterativa las siguientes funciones para la creacion de listas enlazadas.

```C
nodo_t* crear_nodo(int valor);

void liberar_nodo(nodo_t* lista);

void insertar_al_principio(nodo_t* lista, int valor);

void insertar_al_final(nodo_t* lista, int valor);

void insertar_en_posicion(nodo_t* lista, int dato, int posicion);

void eliminar_del_principio(nodo_t* lista);

void eliminar_del_final(nodo_t* lista);

void eliminar_en_posicion(nodo_t* lista, int posicion);

int tamano_lista(nodo_t* lista);

int es_lista_vacia(nodo_t* lista);

int obtener_valor_en_posicion(nodo_t* lista, int posicion);

void imprimir_lista(nodo_t* lista);

void fusionar_lista(nodo_t* lista_1, nodo_t* lista_2);
```

Y en particular

```C
void ordenar_ascendente(nodo_t* lista);
void ordenar_descendente(nodo_t* lista);
```

Utilizando estas funciones, desarrollen un programa que les permmita ordenar un archivo con números
como los de el TP6.

## Ejercicio 2 - Fila (queue)

La estructura de datos "cola" (o "queue" en inglés) es como una fila en la vida real. Imagina una 
fila de personas esperando en una ventanilla o caja registradora. La primera persona en llegar a 
la fila es la primera en ser atendida, y a medida que más personas llegan, se agregan al final de 
la fila. Cuando la persona en el frente de la fila es atendida, sale de la fila, y la siguiente 
persona en la fila pasa a ser la siguiente en ser atendida. 
Esto sigue un principio llamado "FIFO" (First-In-First-Out), que significa "el primero 
en llegar es el primero en ser atendido".

En una estructura de datos cola, los elementos se agregan al final y se eliminan del frente, 
siguiendo este mismo principio. Puedes pensar en una cola como una lista ordenada en la que 
siempre trabajas con el elemento más viejo que se agregó. Las operaciones principales en 
una cola son "encolar" para agregar elementos al final de la cola y "desencolar" para quitar 
elementos del frente de la cola. Las colas se utilizan en programación para gestionar datos 
de manera que se procesen en el orden en que llegaron, como en simulaciones, sistemas de 
impresión, tareas en una cola de procesamiento, entre otros.

Utilizaremos una cola con números enteros para mantener todo simple.

Implementar de manera iterativa, la estructura de datos "Fila", implementando las funciones y 
estructuras indicadas a continuación.

Siendo que ahora hay __dos__ punteros para la estructura, es necesario crear una estructura 
adicional para agruparlos;

```C
typedef struct nodo {
    int dato;
    struct nodo* siguiente;
} nodo_t;

typedef struct cola {
    nodo_t* frente;
    nodo_t* final;
} cola_t;
```

Y las funciones a implementar:

```C
cola_t* crear_cola();

int esta_vacia(cola_t* cola);

void encolar(cola_t* cola, int dato);

int desencolar(cola_t* cola);

int frente_cola(cola_t* cola);

void vaciar_cola(cola_t* cola);
```

Encolar, es por el final de la cola, y desencolar es por el frente de la misma.

Utilizando la fila, implementen un programa de turnos en una farmacia, en donde pueden:
* Un cliente puede pedir un turno y este les dirá en que posicion esta.
* Un cajero toma el primero de la fila, mostrando que numero esta por atender.
