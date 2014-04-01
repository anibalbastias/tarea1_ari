# Tarea 1 - ARI (Grupo 2) 1S 2014 UTFSM

## Descripcion
Esta tarea consiste en realizar una simulacion del funcionamiento de un disco duro magnetico al realizar
las operaciones de buscar, insertar y borrar un archivo a traves de la posicion del bloque.
Se implementan funciones aprendidas en la asignatura "Estructuras de Datos" para el caso de listas circulares
y colas para detectar los anillos (o pistas en este caso), y al estar llenos, crear un nuevo anillo, que seria
la pista siguiente.

En un archivo de texto se va guardando los datos escritos, llamado FAT (sin extension), y otro archivo llamado
LECTOR (sin extension) donde se va guardando la posicion del lector en el bloque y pista respectivo.

## Estructura de Archivos

La tarea 1 se compone por un archivo main.c que contiene la raiz principal de las funciones implementadas.
Los archivos *.h contienen las declaraciones e implementaciones de las funciones. El archivo FAT contiene
los registros de cada bloque del disco Blando. El archivo Makefile contiene las sentencias para compilar,
crear los objetos y compilar la aplicacion.

```C
-- Tarea1
    -- main.c
    -- head.h
    -- head_circ_list.h
    -- head_system.h
    -- head_disco_bland.h
    -- FAT
    -- LECTOR
    -- Makefile
```

## Modo de Compilacion

Para compilar la tarea, ir a traves del terminal de Unix al directorio de la tarea y escribir los comandos:

```unix
> cd /Tarea1/
> make
```

Para borrar los objetos y ejecutable, escribir:

```unix
> make clean
```

## Modo de Ejecucion

Para ejecutar la tarea, ir a traves del terminal unix al directorio de la tarea y escribir el comando:

```unix
> cd /Tarea1/
> ./tarea1
```
