#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

void end();
void CargarDatosRand(int vector1[100]);
void Promedios(int vector1[100],float &PromedioPar,float &PromedioImpar);

main()
{
	int vector[100],SumaPar,SumaImpar;
	float PromedioPar,PromedioImpar;

	CargarDatosRand(vector);
    
	Promedios(vector,PromedioPar,PromedioImpar);
	printf("\n El promedio de numeros pares del vector es: %.2f",PromedioPar);
	printf("\n El promedio de numeros impares del vector es: %.2f",PromedioImpar);
	
	SumaElementosParesImpares(vector,SumaPar,SumaImpar);
	
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

void SumaElementosParesImpares(int vector1[100],int SumaPar,int SumaImpar)
{
	SumaPar=0;
	SumaImpar=0;

	for (int i = 0; i < 100; i++)
	{
		if ((i+1)%2==0)
		{
			SumaPar=SumaPar+vector[i];
		}
		else
		{
			SumaImpar=SumaImpar+vector[i];
		}
	}
}


void end()
{
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}