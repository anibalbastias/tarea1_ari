/*
 * head_system.h - Declaracion de las funciones para sistema
 *
 */

/* -------- INICIO head_system.h --------- */

// Refrezcar Pantalla
// http://stackoverflow.com/questions/9150397/warning-ignoring-return-value-of-system-c
void refrezcar_pantalla()
{
	int sistema = system("clear");
	if(sistema == -1)
	{
		// The system method failed
	}
	else
	{
		printf("Tarea 1 (Grupo 02) - Recuperacion de Informacion\n");
		printf("------------------------------------------------\n\n");
	}
}

// Terminar Aplicacion
// http://stackoverflow.com/questions/9150397/warning-ignoring-return-value-of-system-c
void finalizar()
{
	int sistema = system("clear");
	if(sistema == -1)
	{
		// The system method failed
	}
	else
	{
		// Exit
	}
}

/* -------- FIN head_system.h --------- */
