/*
 * Tarea 1 - Recuperacion de Informacion
 *
 * GRUPO 2
 * Anibal Bastias Soto 		2604215-1
 * Alvaro Rojas Gonzalez 	2630047-9
 *
 */

#include "head.h"
#include "head_system.h"
#include "head_circ_list.h"
#include "head_disco_blando.h"

// Funcion Main de la Aplicacion
int main(void)
{
	int opcion = 0;

	do
	{
		refrezcar_pantalla();

		printf("Opciones de Disco Duro Blando\n");
		printf("\t1. Ingresar Archivo\n");
		printf("\t2. Buscar Archivo\n");
		printf("\t3. Eliminar Archivo\n");
		printf("\t4. Salir\n\n> ");

		// Omitir warning de Scanf
		// http://stackoverflow.com/questions/7271939/declared-with-attribute-warn-unused-result
		if(scanf("%d",&opcion) == 1);

		switch(opcion)
		{
			case 1:
				ingresar_archivo();
				break;
			case 2:
				buscar_archivo();
				break;
			case 3:
				eliminar_archivo();
				break;
			case 4:
				finalizar();
				break;
			default:
				printf("Ingrese una opcion correcta por favor.\n");
				break;
		}
		getchar();
	}
	while(opcion < 0 || opcion > 5);

	return EXIT_SYSTEM;
}
