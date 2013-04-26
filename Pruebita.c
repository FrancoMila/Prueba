/*
 * Pruebita.c
 *
 *  Created on: 26/04/2013
 *      Author: utnso
 */
#include <stdio.h>

int main (void) {
	char buffer[80];
	printf("hola que tal");
	gets (buffer);
	printf("Contenido: %s", buffer);
	printf("Mira como te lo cambio gil");
	return 0;
}
