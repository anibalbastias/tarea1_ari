# Tarea 1 - ARI (Grupo 2) 1S 2014 UTFSM

## Descripcion



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
    -- Makefile
```

## Modo de Compilacion

Para compilar la tarea, ir a traves del terminal de Unix al directorio de la tarea y escribir los comandos:

* cd /Tarea1/
* make

Para borrar los objetos y ejecutable, escribir:

* make clean

## Modo de Ejecucion

Para ejecutar la tarea, ir a traves del terminal unix al directorio de la tarea y escribir el comando:

* cd /Tarea1/
* ./tarea1
