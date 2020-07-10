#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

void end();
void CargarDatosRand(int vector1[100]);
void Promedios(int vector1[100],float &PromedioPar,float &PromedioImpar);

main()
{
	int vector[100];
	float PromedioPar,PromedioImpar;

	CargarDatosRand(vector);
    Promedios(vector,PromedioPar,PromedioImpar);
	
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

void Promedios(int vector1[100],float &PromedioPar,float &PromedioImpar)
{
	int AcumuladorPar,ContadorPar=0,AcumuladorImpar,ContadorImpar=0;

	for (int i = 0; i < 100; i++)
	{
		if (vector1[i]%2==0)
		{
			AcumuladorPar=AcumuladorPar+vector1[i];
			ContadorPar++;
		}
		else
		{
			AcumuladorImpar=AcumuladorImpar+vector1[i];
			ContadorImpar++;
		}
	}

	PromedioPar=(float)AcumuladorPar/ContadorPar;
	PromedioImpar=(float)AcumuladorImpar/ContadorImpar;
}


void end()
{
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}