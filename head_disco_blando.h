/*
 * head_disco_blando.h - Declaracion de las funciones principales para Disco Blando
 *
 */

/* -------- INICIO head_disco_blando.h --------- */

// Funcion Ingresar Archivo a Fichero FAT
void ingresar_archivo()
{
	refrezcar_pantalla();
	printf("1. Ingresar Archivo\n");
	printf("-------------------\n");

	FILE *fp;

 	char caracter;

 	fp = fopen ("FAT", "r+");

 	printf("\nIngrese nombre de archivo: ");

 	while((caracter = getchar()) != '\n')
 	{
 		printf("%c", fputc(caracter, fp));
 	}

 	fclose ( fp );

}

// Funcion Buscar Archivo a Fichero FAT
void buscar_archivo()
{
    refrezcar_pantalla();
	printf("> Opcion 2\n");
}

// Funcion Eliminar Archivo a Fichero FAT
void eliminar_archivo()
{
	refrezcar_pantalla();
	printf("> Opcion 3\n");
}

/* -------- FIN head_disco_blando.h --------- */
