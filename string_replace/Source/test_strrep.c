/*
 * test_strrep.c
 *
 *  Created on: 12 ene. 2020
 *      Author: ipserc
 */


#include "strrep.h"

void caso1(void) {
	char cadena[200] = "R&B\\/Soul\\/Funk";
	char * newCadena;

	printf("Cadena:%s:\n", cadena);

	newCadena = strrep(cadena, "\\/", "/");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);

	newCadena = strrep(cadena, "\\/", "/");
	newCadena = strrep(newCadena, "unk", "unkie");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);

}

void caso2(void) {
	char cadena[200] = "El ánimo de pensar en lo que se puede temer, conduce a temer en lo que se puede pensar";
	char * newCadena;

	printf("Cadena:%s:\n", cadena);
	newCadena = strrep(cadena, "e", "3");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);

	printf("Cadena:%s:\n", cadena);
	newCadena = strrep(cadena, "r", "RrRr");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);

	printf("Cadena:%s:\n", cadena);
	newCadena = strrep(cadena, "pensar", "creer");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);

	printf("Cadena:%s:\n", cadena);
	newCadena = strrep(cadena, "temer", "hacer");
	printf("Sust  :%s:\n", newCadena);
	free(newCadena);
}

void main (void) {
	caso1();
	caso2();
}
