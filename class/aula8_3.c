
#include "stdafx.h"

struct clientData{
	int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};


int _tmain(int argc, _TCHAR* argv[])
{
	int i;

	struct clientData blankClient = { 0, "", "", 0.0 };

	FILE *cfPtr;

	if ((cfPtr = fopen("credit.dat", "wb")) == NULL){
		printf("Arquivo nao pode ser aberto.\n");
	}
	else {
		for (i = 1; i <= 100; i++){
			fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
		}
		fclose(cfPtr);
	}

	int espera = 0;
	scanf("%d", &espera);
	return 0;
}