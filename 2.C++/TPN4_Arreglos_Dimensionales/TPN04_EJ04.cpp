#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

void end();
void CargarDatosRand(int vector1[100]);
int MultiplosVector(int vector1[100]);
void Mostrar(int vector1[100]);

main()
{
    int vector[100];

    CargarDatosRand(vector);
    
    printf("\nLa cantidad de multiplos encontrados es de: %d Multiplos.\n",MultiplosVector(vector));

    Mostrar(vector);

    end();
}

void CargarDatosRand(int vector1[100])
{
    srand(time(0));

    for (int i = 0; i < 100; i++)
    {
        vector1[i]=1+rand()%432;
    }
}

int MultiplosVector(int vector1[100])
{
    int k,contador=0;
    
    printf("\n Ingrese un valor para determinar cuantos multiplos hay del mismo en el vector: ");
    scanf("%d",&k);
    
    if (k!=0)
    {
        for (int i = 0; i < 100; i++)
        {
            if (vector1[i]%k==0)
            {
                contador++;
            }
        }
        return contador;
    }
    else
    {
        return 0;
    }
}

void Mostrar(int vector1[100])
{
    for (int i = 0; i < 100; i++)
    {
        printf("\n\nVector: ");
        printf("\t%d",vector1[i]);
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