# TP0-2023
Bienvenidos a Programación 1.

Estos ejercicios tienen como objetivo familiarizarte con la herramienta que utilizaremos, así como la mecánica de entrega y revisión de ejercicios prácticos. 

Las entregas son en general individuales y los repositorios en sí son privados.

En este TP, no vamos a programar, pero sí les pediremos que escriban usando Markdown, por lo que es muy recomendable que revisen los apuntes que están en la sección [Bibliografía suplementaria](https://github.com/INGCOM-UNRN-P1/cursada-2023#bibliograf%C3%ADa-suplementaria).

## Preparativos

Comenzaremos trabajando para completar los preparativos para las prácticas de la cátedra.

### Instalación de git
Si ya lo tenían instalado de antes, puede obviar este paso, pero si no lo tienen instalado y configurado, no podrán continuar con el resto de los ejercicios. Pueden consultar la siguiente [guía](https://github.com/INGCOM-UNRN-P1/cursada-2023/blob/fbddd49ab778e1fdc9f3537e64aee195bd824779/recursos/cversiones-git-r76.pdf) para completar este paso, la cual está pensada para ser utilizada con el `git` de línea de comandos que se descarga e instala desde [git-scm.org](https://git-scm.com/)

Pero no es la única forma, pueden utilizar directamente el Visual Studio Code (paso siguiente), o [Github Desktop](https://desktop.github.com/) que es son una buena alternativa para aquellos que prefieran una interfaz gráfica más tradicional.

Para verificar que este punto fue completado, bueno, el que este TP este completo en su correspondiente repositorio es suficiente.

### Instalando las herramientas

Descarguen el compilador, [MinGW](https://www.mingw-w64.org/)  e instalenló, y luego hagan lo mismo con el entorno de desarrollo [Visual Studio Code](https://vscode.dev)

Pueden emplear la [guía de instalación](about:blank) para los detalles.

Comprobaremos que este ejercicio fue completado subiendo en un archivo el texto de versión del compilador (en `compilador.txt`). Pueden obtener esta información usando el siguiente comando en una terminal:

```sh
$> gcc --version
```
Y si no aparece algo como:
```
gcc.exe 12.0
Copyright (C) 2022 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Si no lo estás viendo, entonces no estaría de más compartir lo que has hecho en [#Preguntas y respuestas](https://github.com/INGCOM-UNRN-P1/cursada-2023/discussions/new?category=preguntas-y-respuestas) para que te podamos dar una mano para resolverlo.

## Ficha
Completen el archivo llamado `ficha.md` en el repositorio, el cual tiene la siguiente forma:
```
nombre y apellido:
matricula:
correo electrónico:
usuario github:
```
Utilizaremos esta información para el seguimiento de las entregas a lo largo del cuatrimestre, por lo que es necesario que lo completen lo antes posible.

Es importante no modificar el texto que ya está en el archivo, porque el programa que se encarga de recopilar puede confundir la información.

##
