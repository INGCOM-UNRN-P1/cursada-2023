# Sudoku

## Objetivo
Programar un juego de Sudoku en C que permita a un jugador ingresar números en una cuadrícula y verificar si se ajustan a las reglas del Sudoku.

El juego debe poder ser guardado y recuperado para terminarlo luego empleando archivos.

## Reglas del Sudoku

## Instrucciones:

 * Debes crear una matriz 9x9 para representar el tablero de Sudoku. Inicializa la matriz con algunos números iniciales para que el jugador tenga un punto de partida.
 * El juego debe mostrar la cuadrícula al jugador y permitirle ingresar coordenadas (fila y columna) junto con un número.
 * Después de que el jugador ingrese una coordenada y un número, el programa debe verificar si el número es válido para esa posición. Verifica que el número no esté repetido en la misma fila ni en la misma columna. Además, verifica que el número no se repita en la región 3x3 a la que pertenece la celda.
 * Si el número es válido, el programa debe actualizar la matriz y mostrar la cuadrícula actualizada.
 * Si el número no es válido, el programa debe informar al jugador y permitirle ingresar una nueva coordenada y número.
 * El juego debe continuar hasta que el jugador complete todo el tablero o decida salir.

## Explicación del Juego:

El Sudoku es un juego de lógica en el que el jugador debe llenar una cuadrícula de 9x9 con números del 1 al 9 sin repetir ningún número en las filas, columnas o regiones 3x3. El juego comienza con algunas celdas ya llenas, lo que ayuda al jugador a resolver el puzzle. El objetivo es llenar todas las celdas vacías siguiendo las reglas del juego.

El jugador ingresa números en las celdas vacías, y el programa verifica si los números ingresados son válidos según las reglas del Sudoku. Si un número es válido, se coloca en la celda; de lo contrario, se le pide al jugador que ingrese otro número.

El juego continúa hasta que el jugador complete con éxito el Sudoku o decida salir.

