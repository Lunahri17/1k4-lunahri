#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(float Arreglo[50][50][50],int Filas,int Columnas,int Planos);
float MenorValor(float Arreglo[50][50][50],int Filas,int Columnas,int Planos);
bool esDecimal(float num);
bool esPar(float Menor);

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

    if (esDecimal(Menor))
    {
        printf("\nEl numero menor es decimal, por lo que el programa no puede determinar si es par o impar.");
    }
    else
    {
        if (esPar(Menor))
        {
            printf("\nEl numero menor es Par.");
        }
        else
        {
            printf("\nEl numero menor es Impar.");
        }
    }
    
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
                scanf("%f",&Arreglo[i][j][k]);
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

    return Menor;
}

bool esDecimal(float num)
{
    int ent=num;
    return num-ent;
}

bool esPar(float Menor)
{
    int num=Menor;
    
    if (num%2==0)
    {
        return true;
    }
    else
    {
        return false;
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