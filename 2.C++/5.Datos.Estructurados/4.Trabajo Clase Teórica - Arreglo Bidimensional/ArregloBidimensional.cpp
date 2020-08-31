#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarMatriz(int m,int Matriz[100][100]);
void MostrarMatriz(int m,int Matriz[100][100]);

//Variables globales:


main()
{
	int m,s,Matriz[100][100];

    printf("\nIngrese la cantidad de filas de la matriz cuadrada: ");
	scanf("%d",&m);

	CargarMatriz(m,Matriz);
	MostrarMatriz(m,Matriz);
	
	end();
}

void CargarMatriz(int m,int Matriz[100][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i<=j)
			{
				printf("Matriz[%d][%d]= ",i,j);
				scanf("%d",&Matriz[i][j]);
			}
			else
			{
				Matriz[i][j]=-Matriz[j][i];
			}
		}
	}
}

void MostrarMatriz(int m,int Matriz[100][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Matriz[%d][%d]= %d",i,j,Matriz[i][j]);
		}
	}
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}