// Atividade4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void printTxtFile(char *nomeArquivo);
void convertTxtToBin(char *nomeArquivo, int tamanhoNome);
void printInvertedBinFile(char *nomeArquivo);

int _tmain(int argc, _TCHAR* argv[])
{
	char noticias[] = "noticias.txt";

	printf("PRINT de noticias.txt:\n\n");
	printTxtFile(noticias);

	printf("\n\nConvertendo em .bin...\n\n");
	convertTxtToBin(noticias, 12);

	printf("\nIniciando PRINT do .bin em ordem reversa de linhas:\n\n");
	printInvertedBinFile("noticias.bin");

	int espera = 0;
	scanf("%d", &espera);
	return 0;
}

void printTxtFile(char *nomeArquivo){
	FILE *filePtr;
	int c;

	if ((filePtr = fopen(nomeArquivo, "r")) == NULL){
		printf("Arquivo .txt nao pode ser aberto.");
	}
	else {
		do{
			c = fgetc(filePtr);
			printf("%c", c);
		} while (c != EOF);
		fclose(filePtr);
	}
}

void convertTxtToBin(char *nomeArquivo, int tamanhoNome){
	FILE *txtPtr;
	FILE *binPtr;
	int c;

	if ((txtPtr = fopen(nomeArquivo, "r")) == NULL){
		printf("Arquivo .txt nao pode ser aberto.");
	}
	else {
		char *nomeBin = nomeArquivo;
		nomeBin[tamanhoNome - 3] = 'b';
		nomeBin[tamanhoNome - 2] = 'i';
		nomeBin[tamanhoNome - 1] = 'n';

		if ((binPtr = fopen(nomeBin, "wb")) == NULL){
			printf("Arquivo .bin nao pode ser aberto.");
		}
		else {
			do{
				c = fgetc(txtPtr);
				fputc(c, binPtr);
			} while (c != EOF);
		}
		fclose(txtPtr);
		fclose(binPtr);
		printf("Convertido em .bin com sucesso!\n");
	}
}

void printInvertedBinFile(char *nomeArquivo){
	FILE *filePtr;
	int c;
	int contador = 0;

	if ((filePtr = fopen(nomeArquivo, "rb")) == NULL){
		printf("Arquivo nao pode ser aberto.");
	}
	else {
		//Continuar daqui
		do{
			c = fgetc(filePtr);
			printf("%c", c);
			contador++;
		} while (c != EOF);

	}


}