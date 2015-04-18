#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int account;
	char name[30];
	double balance;

	FILE *cfPtr;

	if ((cfPtr = fopen("clients.dat", "w")) == NULL){
		printf("Arquivo nao pode ser aberto.\n");
	}
	else {
		printf("Digite o numero de conta, o nome e o saldo.\n");
		printf("Digite o fim de arquivo para terminar a entrada.\n");
		printf("? ");
		scanf("%d%s%lf", &account, name, &balance);

		while (!feof(stdin)){
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf("%d%s%lf", &account, name, &balance);
		}
		fclose(cfPtr);
	}
	return 0;
}