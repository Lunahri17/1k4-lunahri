#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(int Arreglo[50][50][50],int Filas,int Columnas,int Planos);
void SumaPlanos(int Arreglo[50][50][50],int Filas,int Columnas,int Planos,int Suma[50]);
void MostrarVector(int Vector[50],int Indice);
float Promedio(int Vector[50],int Indice)

main()
{
	int Arreglo[50][50][50],Suma[50],Filas,Columnas,Planos;

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d",&Filas);
    printf("\nIngrese la cantidad de columnas: ");
    scanf("%d",&Columnas);
    printf("\nIngrese la cantidad de planos: ");
    scanf("%d",&Planos);

    printf("\nCargue el arreglo: ");
    CargarArreglo(Arreglo,Filas,Columnas,Planos);

    SumaPlanos(Arreglo,Filas,Columnas,Planos,Suma);

    printf("\nVector con la suma de los planos: ");
    MostrarVector(Suma,Planos);
    
    printf("\nEl promedio del Vector de la suma de los planos es: %.2f",Promedio(Suma,Planos));
    
	end();
}

void CargarArreglo(int Arreglo[50][50][50],int Filas,int Columnas,int Planos)
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

void SumaPlanos(int Arreglo[50][50][50],int Filas,int Columnas,int Planos,int Suma[50])
{
    int Acumulador=0;
    
    for (int k = 0; k < Planos; k++)
    {
        Acumulador=0;

        for (int j = 0; j < Columnas; j++)
        {
            for (int i = 0; i < Filas; i++)
            {
                Acumulador+=Arreglo[i][j][k];
            }
        }

        Suma[k]=Acumulador;
    }
}

void MostrarVector(int Vector[50],int Indice)
{
    for (int i = 0; i < Indice; i++)
    {
        printf("%d ",Vector[i]);
    }
}

float Promedio(int Vector[50],int Indice)
{
    int Acumulador=0;

    for (int i = 0; i < Indice; i++)
    {
        Acumulador+=Vector[i];
    }
    
    return Acumulador/Indice;
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}