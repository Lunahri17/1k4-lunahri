#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void end();
void Mostrar(int vector1[200],int n1);
void CargarVector(int vector1[200],int &n1);
void OrdenarMayorMenor(int vector1[200],int n1);
void OrdenarMenorMayor(int vector1[200],int n1);


main()
{
    int vector[200],n; // n = Es el numero de dimenciones del vector.

    CargarVector(vector,n);

    system("cls");

    printf("\n Vector ingresado: ");
    Mostrar(vector,n);

    OrdenarMayorMenor(vector,n);
    printf("\n\n Vector ordenado de Mayor a Menor: ");
    Mostrar(vector,n);
	
    OrdenarMenorMayor(vector,n);
    printf("\n\n Vector ordenado de Menor a Mayor: ");
    Mostrar(vector,n);

	end();
}

void Mostrar(int vector1[200],int n1)
{
    for (int i = 0; i < n1; i++)
    {
        printf("\t%d",vector1[i]);
    }
    
}

void CargarVector(int vector1[200],int &n1)
{
    printf("\tCarga del arreglo:\n");

    printf("\n Ingrese la dimencion del arreglo: ");
    scanf("%d",&n1);

    for (int i = 0; i < n1; i++)
    {
        printf("\n Ingrese el valor %d del arreglo: ",i+1);
        scanf("%d",&vector1[i]);
    }
}

void OrdenarMayorMenor(int vector1[200],int n1)
{
    int aux,b;

    do
    {
        b=0;
        for (int i = 0; i < n1-1; i++)
        {
            if (vector1[i]<vector1[i+1])
            {
                aux=vector1[i];
                vector1[i]=vector1[i+1];
                vector1[i+1]=aux;

                b=1;
            }
        }
    } while (b==1);      
}

void OrdenarMenorMayor(int vector1[200],int n1)
{
    int aux,b;

    do
    {
        b=0;
        for (int i = 0; i < n1-1; i++)
        {
            if (vector1[i]>vector1[i+1])
            {
                aux=vector1[i];
                vector1[i]=vector1[i+1];
                vector1[i+1]=aux;

                b=1;
            }
        }
    } while (b==1);      
}

void end()
{
	printf("\n\n");
    system("pause");
   	printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}
