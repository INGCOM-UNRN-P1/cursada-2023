#include <stdio.h>


/**
 * Este es un ejemplo de las opciones de printf
 * Las mas comunes y algunas no tanto pero de particular interes.
 */
int main(){
    printf ("Numeros enteros: \t\t %i %u \n", -3456, 3456);
    printf ("Caracteres: \t\t\t %c %c \n", 'z', 80);
    printf ("Enteros: \t\t\t %d %ld\n", 1997, 32000L);
    printf ("Enteros en otras bases: \t %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf ("Decimales: \t\t\t %4.2f %+.0e %E \n", 3.14159, 3.14159, 3.14159);
    printf ("Relleno antes de espacios: \t '%10d' \n", 1997);
    printf ("Relleno depues de espacios: \t '%010d' \n", 1997);
    printf ("Relleno de caracteres: \t\t '%*d' \n", 15, 140);
    printf ("Una cadena \t\t\t '%s' \n", "Programacion 1");
    return 0;
}
