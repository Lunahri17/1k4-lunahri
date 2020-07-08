#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int n;
	float notas[200];

	printf(" Ingrese la cantidad de notas:");
	scanf("%d",&n);

	CargarNotas(n,notas);
    
	
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
			printf("\nIngreso una nota erronea. Vuelva a ingresarla.");
			i--;
		}
	}
}