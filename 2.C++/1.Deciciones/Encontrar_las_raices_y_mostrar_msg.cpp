#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float a,b,c,x1,x2,dis;
	
	printf("\nIngrese el coeficiente a: ");
	scanf("%f",&a);
	printf("\nIngrese el coeficiente b: ");
	scanf("%f",&b);
	printf("\nIngrese el coeficiente c: ");
	scanf("%f",&c);
	
	dis=b*b-4*a*c; printf("%f",dis);
	
	if(dis<0)
	{
		printf("\nLas raices son complejas");
	}
	else	
	{
		x1=(-b+sqrt(dis))/(2*a);
		x2=(-b-sqrt(dis))/(2*a);
		
		if(dis==0)
		{
			printf("\nLas raices son iguales");
			printf("\nX1 y X2 es: %f",x1);
			;
		}
		else
		{
			printf("\nLas raices son distintas");
			printf("\nLa raiz 1 es: %f",x1);
			printf("\nLa raiz 2 es: %f",x2);
		}
	}
	printf("\n\n");
 	system("pause");
}

