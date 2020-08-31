#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarMatriz(int m,int Matriz[100][100]);
void MostrarMatriz(int m,int Matriz[100][100]);
void Ordenar(int m,int Matriz[100][100]);


main()
{
	int m,s,Matriz[100][100];

    printf("\nIngrese la cantidad de filas de la matriz cuadrada: ");
	scanf("%d",&m);

	CargarMatriz(m,Matriz);

	printf("\nMatriz ingresada:");
	MostrarMatriz(m,Matriz);

	printf("\n\nMatriz ordenada:");
	Ordenar(m,Matriz);
	MostrarMatriz(m,Matriz);

	printf("\nSuma del cuadrado de la matriz: %d",SumaCuadrado(m,Matriz));

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
				printf("\nMatriz[%d][%d]= ",i,j);
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
			printf("\nMatriz[%d][%d]= %d",i,j,Matriz[i][j]);
		}
	}
}

void Ordenar(int m,int Matriz[100][100])
{
	bool stop;
	int aux;

	do
	{
		stop=true;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m-1; j++)
			{
				if (Matriz[i][j]>Matriz[i][j+1])
				{
					aux=Matriz[i][j];
					Matriz[i][j]=Matriz[i][j+1];
					Matriz[i][j+1]=aux;
					stop=false;
				}
				
				if (i<m-1)
				{
					if (Matriz[i][m-1]>Matriz[i+1][0])
					{
						aux=Matriz[i][m-1];
						Matriz[i][m-1]=Matriz[i+1][0];
						Matriz[i+1][0]=aux;
						stop=false;
					}
				}
			}
		}
	} while (stop==false);

		
}

void SumaCuadrado(int m,int Matriz[100][100])
{
	
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}