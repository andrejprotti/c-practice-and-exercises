// atividade1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "funcoes.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int parada = 0;

	int testeFatorial = fatorial(5);
	long double testeEuler = euler(10);
	int testeExponencial = exponencial(2, 10);
	long double testeExponencialEuler = exponencialEuler(2, 20);

	printf("Fatorial de 5: %d\n", testeFatorial);
	printf("Euler com 10 termos de precisao: %f\n", testeEuler);
	printf("Exponencial 2^10: %d\n", testeExponencial);
	printf("e^2: %f\n", testeExponencialEuler);

	scanf("%d", &parada);

	return 0;
}

