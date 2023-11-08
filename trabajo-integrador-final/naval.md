# Batalla naval

**Objetivo:** Implementar una versión básica del juego de batalla naval para dos jugadores en la que los tableros de juego se almacenan y se actualizan en archivos.
**Descripción del proyecto:** Juego de Batalla Naval para dos jugadores en C con archivos

1. **Preparación del juego:**
   - Define la estructura de los tableros para representar los campos de juego de cada jugador. Puedes utilizar matrices o estructuras para representar los tableros.
   - Cada jugador tendrá un archivo para guardar el estado de su tablero (con la ubicación de sus barcos y los disparos realizados).

2. **Posicionamiento de barcos:**
   - Permite que cada jugador posicione sus barcos en su tablero. Esta información se guardará en los archivos correspondientes para cada jugador.

3. **Turnos y lógica del juego:**
   - Implementa la lógica del juego para que los jugadores intercambien turnos para disparar y actualicen sus tableros en función de los resultados.
   - Los jugadores deben leer los archivos del oponente para verificar los disparos y actualizar sus propios tableros de acuerdo a eso.

4. **Manejo de archivos:**
   - Desarrolla funciones para guardar y cargar los tableros desde y hacia archivos. Esto incluirá la escritura y lectura de las posiciones de los barcos y los disparos realizados.

5. **Interfaz de terminal:**
   - Crea una interfaz en la terminal que permita a los jugadores ver el estado actual de sus tableros, visualizar los disparos y la información del juego.

6. **Finalización y ganador:**
   - Implementa una verificación para determinar si un jugador ha hundido todos los barcos del oponente. En caso afirmativo, declara al otro jugador como ganador del juego.

7. **Pruebas y depuración:**
   - Realiza pruebas exhaustivas para garantizar que el juego funcione correctamente, guardando y cargando los tableros de manera adecuada.
   - Asegúrate de manejar posibles errores, como intentos de lectura o escritura en los archivos y verifica que la lógica del juego sea coherente.

Esta consigna te permitirá desarrollar un juego de batalla naval en C para dos jugadores, donde se utilizan archivos para guardar el estado del juego y la información de los tableros. Implementa la lógica del juego, manejo de archivos y una interfaz de terminal para la interacción de los jugadores.

## Extra
Ver la forma de usar archivos para jugar por email, verificando que el archivo devuelto no tenga 'trampa'.

Por ejemplo:
```sh
$> ./naval tablero jugada_recibida mi_jugada
```

