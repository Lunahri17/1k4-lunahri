#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CargarNotas(int n1, float notas1[100]);
void MayorMenor(int n1,float notas1[100],int &PosMayor,int &PosMen);
float CalculoPromedio(int n1, float notas1[100]);
int NotasSuperioresPromedio(int n1,float notas1[100],float promedio);

main()
{
	int n,PosMen=0,PosMay=0,NSP;
	float notas[100],promedio=0;

	printf(" Ingrese la cantidad de notas: ");
	scanf("%d",&n);

	if (n>0)
	{
		CargarNotas(n,notas);

		MayorMenor(n,notas,PosMay,PosMen);
		printf("\n La nota mas alta es: %.2f",notas[PosMay]);
		printf("\n La nota mas baja es: %.2f\n",notas[PosMen]);

		promedio=CalculoPromedio(n,notas)
		printf("\n El promedio de todas las notas es: %.2f\n",promedio);

		NSP=NotasSuperioresPromedio(n,notas,promedio);
		printf("\n Cantidad de notas que superaron el promedio: %d",NSP);
	}
	
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}

void CargarNotas(int n1, float notas1[100])
{
	for (int i=0;i<n1;i++)
	{
		printf("\n Ingrese la nota %d: ",i+1);
		scanf("%f",&notas1[i]);

		if (notas1[i]<1 or notas1[i]>10)
		{
			printf("\n Ingreso una nota erronea. Vuelva a ingresarla.\n");
			i--;
		}
	}
}

void MayorMenor(int n1,float notas1[100],int &PosMay,int &PosMen)
{
	float NumMay=notas1[0],NumMen=notas1[0];
	
	PosMay=0;
	PosMen=0;

	for (int i=1;i<n1;i++)
	{
		if (notas1[i]>NumMay)
		{
			NumMay=notas1[i];
			PosMay=i;
		}
		
		if (notas1[i]<NumMen)
		{
			NumMen=notas1[i];
			PosMen=i;
		}
	}
}

float CalculoPromedio(int n1, float notas1[100])
{
	float acumulador=0;

	for (int i=0;i<n1;i++)
	{
		acumulador=acumulador+notas1[i];
	}
	return (float)acumulador/n1;
}

int NotasSuperioresPromedio(int n1,float notas1[100],float promedio)
{
	int Contador=0;

	for (int i = 0; i < n1; i++)
	{
		if (notas1[i]>promedio)
		{
			Contador++;
		}
	}
	return Contador;
}


