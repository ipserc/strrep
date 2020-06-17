/*
 * test_strrep.c
 *
 *  Created on: 12 ene. 2020
 *      Author: ipserc
 */


#include "strrep.h"

void do_strrep(const char * cadena, const char * strf, const char * strr) {
	char * newCadena;

	printf("Search \"%s\" and replace it with \"%s\"\n", strf, strr);
	printf("Text    :%s:\n", cadena);
	newCadena = strrep(cadena, strf, strr);
	printf("Replaced:%s:\n\n", newCadena);
	free(newCadena);
}

void caso1(void) {
	char cadena[200] = "R&B\\/Soul\\/Funk";
	char * newCadena;

	puts("Example 1");
	puts("---------");
	printf("Text     :%s:\n", cadena);

	newCadena = strrep(cadena, "\\/", "/");
	printf("Replaced1:%s:\n", newCadena);
	free(newCadena);

	newCadena = strrep(cadena, "\\", "");
	newCadena = strrep(newCadena, "unk", "unkie");
	printf("Replaced2:%s:\n", newCadena);
	free(newCadena);

}

void caso2(void) {
	char cadena[200] = "El ánimo de pensar en lo que se puede temer, conduce a temer en lo que se puede pensar";

	puts("Example 2");
	puts("---------");
	do_strrep(cadena, "e", "3");
	do_strrep(cadena, "r", "RrRr");
	do_strrep(cadena, "pensar", "creer");
	do_strrep(cadena, "temer", "hacer");
	do_strrep(cadena, "temer", "");
	do_strrep(cadena, "", "hacer");
	do_strrep(cadena, " ", "");
	do_strrep(cadena, "something", "");
	do_strrep(cadena, " ", "_|_");

}

void caso3(void) {
	char cadena[200] = "";
	puts("Example 3");
        puts("---------");
        do_strrep(cadena, "e", "3");
}


int main (void) {
	puts("+---------------------------------------+");
	puts("|                                       |");
	puts("| strrep examples of use                |");
	puts("|                                       |");
	puts("+---------------------------------------+");
	puts("");
	caso1();
	puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	caso2();
        puts("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	caso3();
	return 0;
}
