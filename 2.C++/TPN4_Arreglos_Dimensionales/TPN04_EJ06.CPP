#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void end();
void Mostrar(int vector1[200],int n1);
void CargarVector(int vector1[200],int &n1);


main()
{
    int vector[200],n; // n = Es el numero de dimenciones del vector.

    CargarVector(vector,n);
    Mostrar(vector,n);
    
	
	end();
}

void Mostrar(int vector1[200],int n1)
{
    printf("\n Vector: ");

    for (int i = 0; i < n1; i++)
    {
        printf("\t%d",vector1[i]);
    }
    
}

void CargarVector(int vector1[200],int &n1)
{
    printf("\tCarga del arreglo:");

    printf("\n Ingrese la dimencion del arreglo: ");
    scanf("%d",&n1);

    for (int i = 0; i < n1; i++)
    {
        printf("\n Ingrese el valor %d del arreglo: ",i+1);
        scanf("%d",&vector1[i]);
    }
    system("clear");
}


void end()
{
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}