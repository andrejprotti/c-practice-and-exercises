//Implementacoes

#include "funcoes.h"
#include "stdafx.h"

int fatorial(int x){
	if (x == 0 || x == 1){
		return 1;
	}
	else {
		return x * fatorial(x - 1);
	}
}

long double euler(int precisao){
	long double resultado = 0;

	for (int i = 0; i < precisao; i++){
		resultado += 1 / (long double)fatorial(i);
	}

	return resultado;
}

int exponencial(int numero, int fator){
	int resultado = 1;

	for (int i = 0; i < fator; i++){
		resultado *= numero;
	}

	return resultado;
}

long double exponencialEuler(int potencia, int precisao){
	long double resultado = 0;

	for (int i = 0; i < precisao; i++){
		resultado += exponencial(potencia, i) / (long double)(fatorial(i));
	}

	return resultado;
}