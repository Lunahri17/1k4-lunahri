#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

void end();
void CargarDatosRand(int vector1[100]);


main()
{
	int vector[100];

	CargarDatosRand(vector);
    
	
	end();
}

void CargarDatosRand(int vector1[100])
{
    srand(time(0));

    for (int i = 0; i < 100; i++)
    {
        vector1[i]=rand();
    }
}


void end()
{
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}