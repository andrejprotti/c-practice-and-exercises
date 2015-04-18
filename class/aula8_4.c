
#include "stdafx.h"

void printBinFile(FILE *file);

struct clientData{
	int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

int _tmain(int argc, _TCHAR* argv[])
{
	FILE *cfPtr;

	struct clientData client = { 0, "", "", 0.0 };

	if ((cfPtr = fopen("credit.dat", "rb+")) == NULL){
		printf("arquivo nao pode ser aberto.\n");
	}
	else {
		printf("Digite numero de conta 1 a 100, 0 para encerrar entrada.\n? ");
		scanf("%d", &client.acctNum);
		while (client.acctNum != 0){
			printf("Digite sobrenome, nome e saldo\n? ");

			fscanf(stdin, "%s%s%lf", client.lastName, client.firstName, &client.balance);

			fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);

			fwrite(&client, sizeof(struct clientData), 1, cfPtr);

			printf("Enter account number\n? ");

			scanf("%d", &client.acctNum);
		}
		fclose(cfPtr);
	}


	printBinFile(cfPtr);

	int espera;
	scanf("%d", &espera);
	return 0;
}

void printBinFile(FILE *file){
	struct clientData leitura;

	if ((file = fopen("credit.dat", "rb")) == NULL){
		printf("arquivo nao pode ser aberto.\n");
	}
	else {
		fread(&leitura.acctNum, sizeof(struct clientData), 1, file);
		while (!feof(file)){
			printf("%d\t%s\t%s\t%lf\n", leitura.acctNum, leitura.lastName, leitura.firstName, leitura.balance);
			fread(&leitura.acctNum, sizeof(struct clientData),1,file);
			
		}
		fclose(file);
	}
}