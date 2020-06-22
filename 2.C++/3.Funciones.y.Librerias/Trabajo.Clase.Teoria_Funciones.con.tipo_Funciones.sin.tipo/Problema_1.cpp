#include<stdio.h>
#include<stdlib.h>

void cs(float x,int y,float &z);

main()
{
	int ch;
	float vh,sueldo=0,tf=0;
	
	printf("Ingrese el Valor de la Hora: ");
	scanf("%f",&vh);
	
	while(vh>0)
	{
		printf("Ingrese la cantidad de horas trabajadas: ");
		scanf("%d",&ch);
		
		cs(vh,ch,sueldo);
		
		printf("Sueldo del empleado: %.2f\n",sueldo);
		
		tf=tf+sueldo;
		
		printf("\nIngrese el Valor de la Hora: ");
		scanf("%f",&vh);	
	}
	
	printf("\nTotal de sueldos: %.2f",tf);

 	printf("\n\n");
	system("pause");
}

void cs(float x, int y, float &z)
{
	if(y==0)
	{
		z=0;
	}
	else
	{
		z=x*y*0.86;
		if(y>60)
		{
			z=z*1.05;
		}
	}
}
