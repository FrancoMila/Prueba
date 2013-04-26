/*
 * Pruebita.c
 *
 *  Created on: 26/04/2013
 *      Author: utnso
 */
#include <stdio.h>

int main (void) {
	char buffer[80];
	printf("hola que tal\n");
	gets (buffer);
	printf("Contenido: %s\n", buffer);
	getchar();	
	printf("POPOTITO\n");
	printf("Mira como te lo cambio gil\n");
	return 0;
}
