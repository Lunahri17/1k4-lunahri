#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void end();
void CargarVector(int vector1[10]);
void Mostrar(int vector1[10]);
void Potencia(int vector1[10],int vector2[10]);
void SumaDeVectores(int vector1[10],int vector2[10],int vector3[10]);


main()
{
    int vectorA[10],vectorB[10],vectorC[10];

    CargarVector(vectorA);

    system("cls");

    printf("\n El Arreglo A ingresado es: ");
    Mostrar(vectorA);
    
    Potencia(vectorA,vectorB);
    printf("\n\n Arreglo B, que es la potencia del vector A elvedo a su indice : ");
    Mostrar(vectorB);

    SumaDeVectores(vectorA,vectorB,vectorC);
	printf("\n\n Arreglo C, que es la suma entre vector A y el vector B : ");
    Mostrar(vectorC);

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

void Potencia(int vector1[10],int vector2[10])
{
    for (int i = 0; i < 10; i++)
    {
        vector2[i]=pow(vector1[i],i);
    }
}

void SumaDeVectores(int vector1[10],int vector2[10],int vector3[10])
{
    for (int i = 0; i < 10; i++)
    {
        vector3[i]=vector1[i]+vector2[i];
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