#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(int Arreglo[100][100][100],int Filas,int Columnas,int Planos);

main()
{
	int Arreglo[100][100][100],Filas,Columnas,Planos;

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d",&Filas);
    printf("\nIngrese la cantidad de columnas: ");
    scanf("%d",&Columnas);
    printf("\nIngrese la cantidad de planos: ");
    scanf("%d",&Planos);

    CargarArreglo(Arreglo,Filas,Columnas,Planos);

	end();
}

void CargarArreglo(int Arreglo[100][100][100],int Filas,int Columnas,int Planos)
{
    for (int k = 0; k < Planos; k++)
    {
        for (int j = 0; j < Columnas; j++)
        {
            for (int i = 0; i < Filas; i++)
            {
                printf("\nArreglo[%d][%d][%d]= ",i,j,k);
                scanf("%d",&Arreglo[i][j][k]);
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