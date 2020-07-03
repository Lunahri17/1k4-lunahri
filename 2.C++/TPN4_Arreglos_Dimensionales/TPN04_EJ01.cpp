#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void pausa();

void CargarNumeros(int n1,int vector1[100]);
int CalculoMenor(int n1,int vector1[100]);
void MostrarNumeros(int n1,int vector1[100]);

main()
{
    int n,vector[100];

    printf("Ingrese la cantidad numeros: ");
    scanf("%d",&n);

    CargarNumeros(n,vector);
    printf("\nEl menor numero ingresado es: %d",vector[CalculoMenor(n,vector)]);
    MostrarNumeros(n,vector);
    
    pausa();
    printf("\n\tGracias por utilizar el programa.");
 	pausa();
}


void CargarNumeros(int n1,int vector1[100])
{
    for(int i=0;i<n1;i++)
    {
        printf("\nIngrese el valor %d: ",i+1);
        scanf("%d",&vector1[i]);
    }
    system("cls");
}

int CalculoMenor(int n1,int vector1[100])
{
    int NumMen=vector1[0],PosMen=0;

    for (int i=0;i<n1;i++)
    {
        if (vector1[i]<NumMen)
        {
            NumMen=vector1[i];
            PosMen=i;
        }
        
    }
    return PosMen;
}

void MostrarNumeros(int n1,int vector1[100])
{
	printf("\nLos elementos del vector son: ");
	for(int i=0;i<n1;i++)
	{
		printf("\t%d",vector1[i]);					
	}
}

void pausa()
{
    printf("\n\n");
	system("pause");
}