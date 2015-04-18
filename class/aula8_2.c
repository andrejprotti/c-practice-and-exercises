
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int account;
	char name[30];
	double balance;

	FILE *cfPtr;

	if ((cfPtr = fopen("clients.dat", "r")) == NULL){
		printf("Arquivo nao pode ser aberto.\n");
	}
	else {
		printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
		fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
		while (!feof(cfPtr)){
			printf("%-10d%-13s%7.2f\n", account, name, balance);
			fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
		}
		fclose(cfPtr);
	}


	int espera = 0;
	scanf("%d", &espera);
	return 0;
}