#include<stdio.h>
#include<stdlib.h>


main()
{
	int n,c,la,ca,ci=0,cm=0,ce=0;
	float pi=0,pm=0,pe=0;
	
	printf("Ingrese la cantidad de alumnos que se egresaron: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngrese el legajo academico: ");
		scanf("%d",&la);
		
		printf("Ingrese la carrera (1=ISI, 2=Mecanica, 3=Electrica): ");
		scanf("%d",&ca);
		
		if(la>0 and ca>0 and ca<4)
		{
			if(ca==1)
			{
				ci++;
			}
			if(ca==2)
			{
				cm++;
			}
			if(ce==3)
			{
				ce++;
			}
		}
		else
		{
			printf("\nIngreso un dato erroneo");
			c--;
		}
	}
	
	if(n>0)
	{
		printf("\nEgresados en ISI: %d\n",ci);
		printf("Egresados en Mecanica: %d\n",cm);
		printf("Egresados en Electrica: %d\n",ce);
		
		pi=ci*100/n;
		pm=cm*100/n;
		pe=ce*100/n;
		
		printf("\nPorcentaje de egresados en ISI: %.2f\n",pi);
		printf("Porcentaje de egresados en Mecanica: %.2f\n",pm);
		printf("Porcentaje de egresados en Electrica: %.2f\n",pe);
	}
	else
	{
		printf("No se egresaron alumnos");
	}

 	printf("\n\n");
	system("pause");
}

