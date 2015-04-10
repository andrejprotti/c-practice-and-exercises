// Atividade3_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long int value1 = 200000;
	long int value2;

	//Item 'a'
	long int *lPtr;

	//Item 'b'
	lPtr = &value1;

	//Item 'c'
	printf("%d\n", *lPtr);

	//Item 'd'
	value2 = *lPtr;

	//Item 'e'
	printf("%d\n", value2);

	//Item 'f'
	printf("%x\n", &value1);

	//Item 'g'
	printf("%x\n", lPtr);
	//Resposta: Sim os enderecos sao iguais.


	int espera = 0;
	scanf("%d", &espera);
	return 0;
}

