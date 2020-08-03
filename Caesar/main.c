/*
Caesar-Verschluesselung
author: Peter Hartmann
version: 2020-08-03
*/

#include <stdlib.h>
#include <stdio.h>
#include "caesar.h"

#define MAX 10

int main(void) {

	int i = 0;

	char name_in[MAX];

	char * name;

	printf("\n  Namen eingeben (MAX %i): ", MAX);
	
	fgets(name_in, sizeof(name_in), stdin);

	name = name_in;

	name = verschluesseln(name);

	printf("\n	Verschluesselter Name: %s \n", name);

	name = entschluesseln(name);

	printf("	Entschluesselter Name: %s \n", name);

	return 0;
}
