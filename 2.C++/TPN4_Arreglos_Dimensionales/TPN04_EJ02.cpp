#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CargarNotas(int n1, float notas1[200]);

main()
{
	int n,PosMen,PosMay;
	float notas[200];

	printf(" Ingrese la cantidad de notas: ");
	scanf("%d",&n);

	CargarNotas(n,notas);

	MayorMenor(n,notas,PosMen,PosMay);
	printf("\n La nota mas alta es: %.2f",notas[PosMay]);
	printf("\n La nota mas baja es: %.2f\n",notas[PosMen]);

	
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}

void CargarNotas(int n1, float notas1[200])
{
	for (int i=1;i<=n1;i++)
	{
		printf("\n Ingrese la nota %d: ",i);
		scanf("%f",&notas1[i]);

		if (notas1[i]<1 or notas1[i]>10)
		{
			printf("\n Ingreso una nota erronea. Vuelva a ingresarla.\n");
			i--;
		}
	}
}

void MayorMenor(int n1,float notas1[200],int &PosMayor,int &PosMen)
{
	int NumMay=notas1[1],NumMen[1];
	PosMayor=1;
	PosMen=1;

	for (int i=1;i<n1;i++)
	{
		if (NumMay<notas1[i])
		{
			NumMay=notas1[i];
			PosMay=i;
		}
		
		if (NumMen>notas1[i])
		{
			NumMen=notas1[i];
			PosMen=i;
		}
	}
}


