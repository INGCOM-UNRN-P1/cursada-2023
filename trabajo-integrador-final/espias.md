# Juegos de espías


**Objetivo:** Desarrollar un conjunto de programas que permitan a un espía codificar y 
decodificar archivos de texto.

 * Escribe funciones en C para implementar los algoritmos de cifrado César y de sustitución. 
 Asegúrate de modularizar el código para la codificación y decodificación.
 * Implementa la lectura y escritura de archivos para cargar el texto de entrada, realizar la 
 codificación o decodificación y guardar el resultado en un archivo de salida.
 * Proporciona documentación clara sobre cómo usar los programas, incluyendo ejemplos de comandos
 y argumentos de línea de comandos. Mostrar como usar el programa cuando el mismo es llamado con
 los argumentos equivocados.
 * Los algoritmos deben considerar _como mínimo_ letras minúsculas y mayúsculas.
 * Pueden agregar más algoritmos de codificación que encuentren.
 
## Los programas a desarrollar:

**cesar**, que se encarga de codificar y decodificar con este algoritmo, el mismo debe de recibir
el nombre del archivo a trabajar, y el número de 'llave'
```sh
$> ./cesar c 10 entrada codificado
```
**substitucion**, que se encarga 
```sh
$> ./substitucion c tabla entrada salida
```
**generador**, que se encarga de generar tablas aleatorias para el algoritmo de substitución
```sh
$> ./generador tabla
```
Este programa puede incluir argumentos para indicar sobre que conjuntos de caracteres trabajar, 
entre mas completa la generación de la tabla, más resistente será la codificación.

# Los algoritmos de cifrado

## ¿Que es el cifrado del Cesar?
 
El cifrado César es una de las técnicas de cifrado más simples y conocidas. Recibe su nombre por Julio César, 
quien supuestamente lo utilizaba para comunicarse con sus generales.

Consiste en desplazar cada letra del mensaje original un número fijo de posiciones en el alfabeto. Por ejemplo, 
si el desplazamiento es 3, la letra "A" se convierte en "D", la "B" en "E" y así sucesivamente.

Acá tenés un ejemplo simple de cómo se vería el cifrado César con un desplazamiento de 3:

Mensaje original: HOLA

Paso 1: Convertir cada letra usando un desplazamiento de 3 posiciones en el alfabeto.

    H se convierte en K
    O se convierte en R
    L se convierte en O
    A se convierte en D

Entonces, el mensaje cifrado sería "KROD". Para descifrar el mensaje, simplemente se hace el proceso inverso: se desplazan las letras 3 posiciones hacia atrás en el alfabeto.

Cifrado Cesar: https://es.wikipedia.org/wiki/Cifrado_César

## ¿Qué es el cifrado por Substitución?
El cifrado de sustitución con una tabla separada implica la creación de una tabla o clave que mapea cada letra del alfabeto original a otro carácter correspondiente en el alfabeto cifrado. Este método implica una sustitución directa de las letras según la tabla predefinida.

Aquí tienes un ejemplo simple de cifrado de sustitución utilizando una tabla:

Tabla de sustitución:
| Letra Original | Letra Cifrada |
|:--------------:|:-------------:|
| A              | C             |
| B              | E             |
| C              | Q             |
| D              | U             |
| E              | A             |
| F              | X             |
| G              | Z             |
| H              | J             |
| I              | M             |
| J              | D             |
| K              | V             |
| L              | B             |
| M              | R             |
| N              | S             |
| O              | P             |
| P              | K             |
| Q              | Y             |
| R              | F             |
| S              | G             |
| T              | H             |
| U              | I             |
| V              | L             |
| W              | N             |
| X              | O             |
| Y              | T             |
| Z              | W             |

Mensaje original: "HELLO"

Usando la tabla de sustitución proporcionada, vamos a cifrar el mensaje letra por letra:

    H se convierte en J
    E se convierte en A
    L se convierte en B
    L se convierte en B
    O se convierte en K

Entonces, el mensaje cifrado sería "JABBK".

Para descifrar el mensaje, simplemente se utiliza la tabla de sustitución de manera inversa, es decir, se busca el carácter cifrado en la columna "Letra Cifrada" y se reemplaza por el carácter original de la columna "Letra Original".
 

