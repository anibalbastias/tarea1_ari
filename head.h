/*
 * head.h - Declaracion de las funciones
 *
 */

/* -------- INICIO head.h --------- */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_SYSTEM 0
#define LARGO_ARCHIVO 30
#define pistasN 10
#define maxN 9
#define maxPistas 8

/*
 * DEFINICION DE ESTRUCTURAS
 */

// Bloque
typedef struct moldebloque{
	//char nombreArchivo[LARGO_ARCHIVO];
	char nombreArchivo;
	struct moldebloque* bloqueSiguiente;
	struct moldebloque* pistaAnterior;
	struct moldebloque* pistaSiguiente;
}bloque,*pBloque;

// Lector
struct moldelector{
	int pistaActual;
	int sectorActual;
	struct moldebloque* cabeza;
}lector,*pLector;


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

// Crear Bloque
pBloque creaBloque(char nombre);

// Crea Bloque si ya existe
pBloque creaBloque2(char nombre);

// Largo Lista
int largoPista(pBloque p);

// Largo Sector
int largoSector(pBloque p);

// Buscar
pBloque buscar(pBloque p, char nombre);

// Buscar Ultimo elemento de lista
pBloque buscarFinal(pBloque p);

// Insertar Bloque despues de otro bloque
pBloque insertarDespues(pBloque posicion, pBloque nuevo);

// Insertar Bloque al Inicio
pBloque insertaInicio(char nombre);

// Inserta Bloque al Final
pBloque insertaFinal(char nombre);

// Insertar Bloque referenciado
void insertarBloqueRef(pBloque *p, pBloque temp);

// Eliminar Bloque
pBloque descartarBloque(pBloque p);

/*
 * FUNCIONES DE COLAS
 */

// Iniciar Cola
void QUEUEinit(int _maxN);

// Detectar Cola Vacia
int QUEUEempty();

// Obtener elemento
pBloque QUEUEget();

// Cola llena
int QUEUEfull();

// Poner item en cola
void QUEUEput(pBloque item);

// Borrar cola y recuperar espacio
void QUEUEdestroy(void);

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
