#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CargarNumeros(int n1,int vector1[100]);

main()
{
    int n,vector[100];

    printf("Ingrese la cantidad numeros: ");
    scanf("%d",&n);

    CargarNumeros(n,vector);
    printf("\nNumero mayor %d",vecotr[CalculoMayor(n,vector)]);
    
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
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

int CalculoMayor(int n1,int vector1[100])
{
    int NumMay=vector1[0],PosMay=0;

    for (int i=0;i<n1;i++)
    {
        if (vector1[i]>NumMay)
        {
            NumMay=vector1[i];
            PosMay=i;
        }
        
    }
    return PosMay;
}