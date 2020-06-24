#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void valor(int x1,float &valor1);

main()
{
	system("cls");

	int x;
	float valor=0;

	printf("\nIngrese el tiempo de la llamada: ");
	scanf("%d",&x);

	if (x==0)
	{
		printf("\nNo hubo consumo.");
	}
	else
	{
		costo(x,valor);

		printf("\nSu llamada costo: %.2f Pesos.",valor);
	}
	
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}


void valor(int x1,float &valor1)
{
	int var1;
	
	if(x1<4)
	{
		valor1=0.70;
	}
	else
	{
		var1=x1-3;
		valor1=0.7+(var1*0.25);
	}
	
}