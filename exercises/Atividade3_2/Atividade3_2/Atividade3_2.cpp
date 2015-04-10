// Atividade3_2.cpp : Defines the entry point for the console application.
// Andre Jardim Protti

#include "stdafx.h"
#include <stdlib.h>


void mazeTraverse(const int size, char maze[][12], int x, int y, int xFim, int yFim, int sentido);
void printMaze(char maze[][12]);

int _tmain(int argc, _TCHAR* argv[])
{
	const int size = 12;
	char labirinto[size][size] = {
		{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
		{ '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },
		{ '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#' },
		{ '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
		{ '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
		{ '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
		{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
	};

	mazeTraverse(size, labirinto, 2, 0, 4, 11, 1);


	int espera = 0;
	scanf("%d", &espera);
	return 0;
}


void mazeTraverse(const int size, char maze[][12], int x, int y, int xFim, int yFim, int sentido){

	int achouSaida = 0;
	if (x == xFim && y == yFim){
		achouSaida = 1;
	}

	maze[x][y] = 'X';
	printMaze(maze);

	//Comportamento do X para cada sentido de movimento
	//sentido 1 = direita/ sentido 2 = esquerda/ sentido 3 = cima/ sentido 4 = baixo
	if (sentido == 1 && achouSaida != 1){
		if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
			mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
		}
		else {
			if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
				mazeTraverse(size, maze, x, y + 1, xFim, yFim, sentido); 
			}
			else {
				if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
					mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
				}
				else {
					mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
				}
			}
		}
	}
	else if (sentido == 2 && achouSaida != 1){
		if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
			mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
		}
		else {
			if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
				mazeTraverse(size, maze, x, y - 1, xFim, yFim, sentido); 
			}
			else {
				if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
					mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
				}
				else {
					mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
				}
			}
		}
	}
	else if (sentido == 3 && achouSaida != 1){
		if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
			mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
		}
		else {
			if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
				mazeTraverse(size, maze, x - 1, y, xFim, yFim, sentido); 
			}
			else {
				if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
					mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
				}
				else {
					mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
				}
			}
		}
	}
	else if (sentido == 4 && achouSaida != 1){
		if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
			mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
		}
		else {
			if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
				mazeTraverse(size, maze, x + 1, y, xFim, yFim, sentido); 
			}
			else {
				if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
					mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
				}
				else {
					mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
				}
			}
		}
	}
	else {
		//Imprime uma vez o estado atual do labirinto sem limpar a tela depois.
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				printf("%c", maze[i][j]);
			}
			printf("\n");
		}
		printf("\n\nChegou ao fim do labirinto!");
	}
}

//Imprime o labirinto e limpa a tela apos um intervalo para atualizar o estado
void printMaze(char maze[][12]){
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	_sleep(250);
	system("cls");
}