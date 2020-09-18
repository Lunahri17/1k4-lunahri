#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(float Arreglo[50][50][50],int Filas,int Columnas,int Planos);
float MenorValor(float Arreglo[50][50][50],int Filas,int Columnas,int Planos);

main()
{
	int Filas,Columnas,Planos;
    float Arreglo[50][50][50],Menor;

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d",&Filas);
    printf("\nIngrese la cantidad de columnas: ");
    scanf("%d",&Columnas);
    printf("\nIngrese la cantidad de planos: ");
    scanf("%d",&Planos);

    printf("\nCargue el arreglo: ");
    CargarArreglo(Arreglo,Filas,Columnas,Planos);

    Menor=MenorValor(Arreglo,Filas,Columnas,Planos);
    printf("\nEl menor valor encontrado es: %.2f",Menor);


	
	end();
}

void CargarArreglo(float Arreglo[50][50][50],int Filas,int Columnas,int Planos)
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

float MenorValor(float Arreglo[50][50][50],int Filas,int Columnas,int Planos)
{
    float Menor=Arreglo[0][0][0];
    
    for (int k = 0; k < Planos; k++)
    {
        for (int j = 0; j < Columnas; j++)
        {
            for (int i = 0; i < Filas; i++)
            {
                if (Arreglo[i][j][k]<Menor)
                {
                    Menor=Arreglo[i][j][k];
                }                
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