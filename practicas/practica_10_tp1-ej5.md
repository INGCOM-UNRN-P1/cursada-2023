
# TP 1

## Ejemplo - Cociente lento [ejercicio 5]

Escribir una función que, mediante restas sucesivas, obtenga el valor del cociente y el resto de dos números enteros.

```C
/**
Esta funcion indica el signo del numero
@param numero a ser evaluado
@returns -1 si el signo de numero es negativo
          0 si el signo de numero es cero y 
          1 si el signo de numero es positivo.
Precondiciones de la función, un numero entero
Postcondiciones de la función, un numero entero entre -1 y 1.
*/
int signo(int numero)
{
    int retorno;
    if (numero < 0)
    {
        retorno = -1;
    }
    else if (numero > 0)
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}

/**
 * Calcula el cociente entre el dividendo y el divisor utilizando 
 * el método de restas sucesivas.
 *
 * @param dividendo El número que se dividirá.
 * @param divisor El número por el cual se dividirá el dividendo.
 * @return El cociente de la división.
 *
 * Precondiciones Ambos `dividendo` y `divisor` deben ser números enteros válidos.
 * Precondiciones El divisor no puede ser cero.
 * Postcondiciones El resultado sera idéntico al calculado con los operadores
 *   tradicionales.
 */
int cociente_lento(int dividendo, int divisor) 
{
    int cociente = 0;
    int retorno;
    int signo_dividendo = signo(dividendo);
    int signo_divisor = signo(divisor);
    if (divisor == 0)
    {
        printf("Error: Divisor no puede ser cero.\n");
        retorno = 0;
    }
    else
    {
        dividendo = dividendo * signo_dividendo;
        divisor = divisor * signo_divisor;

        while (dividendo >= divisor)
        {
            dividendo -= divisor;
            cociente++;
        }
        retorno = cociente * signo_dividendo * signo_divisor;
    }
    return retorno;
}
```

### `signo`
Esta función índica el signo del número
#### Complejidad temporal:
La función no posee lazos por lo que su complejidad temporal es O(1)

El costo computacional es 1 por cada línea de la función, 7 en total.

#### Complejidad espacial
La función analizada recibe un número de tipo `int`, declara una variable del mismo tipo y utiliza un retorno también del mismo tipo.

La complejidad espacial esta en `3 int`'s

### `cociente_lento`
Calcula el cociente entre el dividendo y el divisor utilizando el método de restas sucesivas.

#### Complejidad temporal:
El algoritmo tiene un único lazo, que se hace ‘divisor’ veces.

El costo computacional queda como:

1 + 1 + 7 + 7 + 1 +1 + 1 + (dividendo/divisor) + 1 + 1

#### Complejidad espacial
Dos argumentos `int` más el retorno del mismo tipo.
Cuatro variables `int` empleadas dentro.

La función necesita el espacio de 7 `int`'s para completar su tarea.
