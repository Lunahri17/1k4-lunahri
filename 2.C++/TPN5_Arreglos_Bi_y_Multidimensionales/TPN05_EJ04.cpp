#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

//Protipos de funciones:
void end();
void CargarMatriz(int Matriz[100][100],int Filas,int Columnas);
void Transpuesta(int Matriz[100][100],int MatrizTranspuesta[100][100],int Filas,int Columnas);
void MostrarMatriz(int Matriz[100][100],int Filas,int Columnas);

main()
{
	srand(time(0));

	int Matriz[100][100],Filas,Columnas,MatrizTranspuesta[100][100];

	printf("\nIngrese la cantidad de filas de la matriz: ");
	scanf("%d",&Filas);
	printf("\nIngrese la cantidad de columnas de la matriz: ");
	scanf("%d",&Columnas);

	CargarMatriz(Matriz,Filas,Columnas);

	Transpuesta(Matriz,MatrizTranspuesta,Filas,Columnas);

	printf("\n La matriz A es:");
	MostrarMatriz(Matriz,Filas,Columnas);
	
	printf("\n\n La matriz B es:");
	MostrarMatriz(MatrizTranspuesta,Filas,Columnas);

	end();
}

void CargarMatriz(int Matriz[100][100],int Filas,int Columnas)
{
    for (int j = 0; j < Columnas; j++)
    {
        for (int i = 0; i < Filas; i++)
        {
            Matriz[i][j]=1+rand()%1000; //Decidí poner como tope 1000, así lo numero no se hagan muy grandes a la hora de probar el programa.
        }
    }
}

void Transpuesta(int Matriz[100][100],int MatrizTranspuesta[100][100],int Filas,int Columnas)
{
	for (int j = 0; j < Columnas; j++)
	{
		for (int i = 0; i < Filas; i++)
		{
			MatrizTranspuesta[i][j]=Matriz[j][i];
		}
	}
}

void MostrarMatriz(int Matriz[100][100],int Filas,int Columnas)
{
    for (int i = 0; i < Filas; i++)
    {
        printf("\n\n");

        for (int j = 0; j < Columnas; j++)
        {
            printf(" %d",Matriz[i][j]);

            if (j<Columnas-1)
            {
                printf(" - ");
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