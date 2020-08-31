#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();


//Variables globales:


main()
{
	int m,s,Matriz[100][100];

    printf("\nIngrese la cantidad de filas de la matriz cuadrada: ");
	scanf("%d",&m);

	CargarVector(m,Matriz);
	
	end();
}

void CargarVector(int m,int Matriz[100][100])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i<=j)
			{
				printf("a[%d][%d]= ",i,j);
				scanf("%d",&Matriz[100][100]);
			}
			else
			{
				a[i][j]=-a[j][i];
			}
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