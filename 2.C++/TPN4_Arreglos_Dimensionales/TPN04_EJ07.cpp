#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void end();
void CargarVector(int vector1[10]);
void Mostrar(int vector1[10]);


main()
{
    int vector[10];

    CargarVector(vector);

    system("cls");

    printf("\n Vector ingresado es: ");
    Mostrar(vector);
    
	
	end();
}

void CargarVector(int vector1[10])
{
    printf("\tCarga del arreglo:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n Ingrese el valor %d del arreglo: ",i+1);
        scanf("%d",&vector1[i]);
    }
}

void Mostrar(int vector1[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d",vector1[i]);
    }
    
}


void end()
{
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}