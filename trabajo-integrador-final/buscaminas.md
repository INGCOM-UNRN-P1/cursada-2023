# Buscaminas

## Objetivo:
Programar un juego de Buscaminas en el que el jugador despeje casillas para encontrar casillas con valor 1 y acumular puntos, mientras evita las minas que provocarán la pérdida de la partida.

El juego debe permitir guardar la partida en un archivo para retomarlo luego.

La creación del juego debe permitir cambiar la dificultad (la cantidad de minas), y las dimensiones del tablero.

## Reglas del Buscaminas:
El Buscaminas es un juego en el que se presenta una cuadrícula de casillas. Algunas casillas contienen minas, mientras que otras contienen un valor que indica la cantidad de minas adyacentes. El objetivo del juego es despejar todas las casillas que no contienen minas sin activar una mina.

## Instrucciones:

 * Debes crear una matriz (por ejemplo, 10x10) para representar el tablero de Buscaminas. Inicializa la matriz con algunos valores aleatorios, incluyendo minas (por ejemplo, 0 para casillas vacías y 1 para minas).
 * El juego debe mostrar la cuadrícula al jugador y permitirle ingresar coordenadas (fila y columna) para despejar una casilla.
 * Después de que el jugador despeje una casilla, el programa debe verificar si el valor de esa casilla es 1 o 0. Si es 1, el jugador acumula puntos. Si es 0, el jugador pierde la partida y el juego muestra todas las casillas en el tablero, indicando con "X" las casillas que el jugador acertó.
 * El juego debe continuar hasta que el jugador haya despejado todas las casillas con valor 1 o haya encontrado una mina (casilla con valor 1).
 * Al final del juego, muestra la puntuación acumulada por el jugador.

## Explicación del Juego:

El Buscaminas es un juego de lógica en el que el jugador debe despejar casillas en una cuadrícula para encontrar casillas con valor 1 y acumular puntos. Si el jugador despeja una casilla con valor 0, la partida se pierde y el juego muestra todas las casillas, indicando con "X" las casillas que el jugador había acertado antes de perder.

El jugador debe ser estratégico al elegir las casillas para despejar y tratar de evitar las minas. El objetivo es acumular la mayor cantidad de puntos posible sin encontrar una mina.

