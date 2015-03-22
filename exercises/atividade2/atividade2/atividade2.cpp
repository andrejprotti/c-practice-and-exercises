// atividade2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int parada = 0;
	int linhas = 0;

	printf("Digite o numero de linhas do losango:\n");
	scanf("%d", &linhas);
	printf("\n");

	int largura = 0;
	int meio = linhas / 2;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < linhas; j++)
		{
			/*Se o indice da coluna da matriz estiver entre a largura do losango na linha
			* partindo do meio imprime '*' caso contrário imprime um espaço.
			*/
			if (j >= (meio - largura) && j <= (meio + largura)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		if (i < linhas / 2){
			largura++;
		}
		else {
			largura--;
		}
	}

	scanf("%d", &parada);
	return 0;
}

