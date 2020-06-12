#include<stdio.h>
#include<stdlib.h>


main()
{
	float tv,tg,t,ac=0;
	int c=1;
	
	while(c<7)
	{
		printf("\nIngrese el total de ventas del mes %d",c); printf(": ");
		scanf("%f",&tv);
		
		printf("Ingrese el total de gastos del mes %d",c); printf(": ");
		scanf("%f",&tg);
		
		t=tv*0.75-tg;
		ac=ac+t;
		
		c=c+1;
	}
	
	if(ac>0)
	{
		printf("\nHubo ganancias en el semestre.");
	}
	else
	{
		if(ac==0)
		{
			printf("\nNo hubo ganancia, ni tampoco perdida en el semestre.");
		}
		else
		{
			printf("\nNo hubo ganancia en el semestre.");
		}
	}

 	printf("\n\n");
	system("pause");
}

