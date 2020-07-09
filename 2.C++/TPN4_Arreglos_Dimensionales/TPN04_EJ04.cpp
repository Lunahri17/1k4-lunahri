#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

void CargarDatosRand(int vector1[100]);

main()
{
    int vector[100];

    CargarDatosRand(vector);
    

    for (int i = 0; i < 100; i++)
    {
        printf("\n%d",vector[i]);
    }
    
	
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}

void CargarDatosRand(int vector1[100])
{
    srand(time(0));

    for (int i = 0; i < 100; i++)
    {
        vector1[i]=1+rand()%432;
    }
}
