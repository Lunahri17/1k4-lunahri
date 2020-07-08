#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CargarNotas(int n1, float notas1[100]);
void MayorMenor(int n1,float notas1[100],int &PosMayor,int &PosMen);

main()
{
	int n,PosMen=0,PosMay=0;
	float notas[100];

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


