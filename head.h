/*
 * head.h - Declaracion de las funciones
 *
 */

/* -------- INICIO head.h --------- */

#include <stdio.h>
#include <stdlib.h>

/*
 * DEFINICION DE ESTRUCTURAS
 */

// Bloque
struct bloque{
	char nombreArchivo[30];
	struct bloque* bloqueSiguiente;
	struct bloque* pistaAnterior;
	struct bloque* pistaSiguiente;
};

// Lector
struct lector{
	int pistaActual;
	int sectorActual;
	struct bloque* cabeza;
};

/*
 * FUNCIONES DE SISTEMA
 */

// Refrezcar Pantalla
void refrezcar_pantalla();

// Finalizar Proceso
void finalizar();


/*
 * FUNCIONES DE LISTAS CIRCULARES
 */

// Crear Nodo

// Insertar Nodo en lista vacia

// Eliminar Nodo


/*
 * FUNCIONES DE DISCO BLANDO
 */

// Ingresar Archivo
void ingresar_archivo();

// Buscar Archivo
void buscar_archivo();

// Eliminar Archivo
void eliminar_archivo();

/* -------- FIN head.h --------- */
