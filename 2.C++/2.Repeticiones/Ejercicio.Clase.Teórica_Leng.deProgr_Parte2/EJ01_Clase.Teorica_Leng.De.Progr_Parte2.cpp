#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int c=0,n=0;
	float vh,ch,s=0,sp=0;
	
	printf("Ingrese el numero de empleados: ");
	scanf("%d",&n);
	
	while(c<n)
	{
		printf("\nIngrese el valor de la hora de trabajo: ");
		scanf("%f",&vh);
		
		printf("Ingrese la cantidad de horas que trabajo el empleado: ");
		scanf("%f",&ch);
		
		if(ch==0)
		{
			printf("No trabajo\n");
		}
		else
		{
			s=vh*ch*0.68;
			
			if(ch>60)
			{
				sp=s*1.05,
				printf("Sueldo del empleado con premio: %.2f\n",sp);
			}
			else
			{
				printf("Sueldo del empleado: %.2f\n",s);
			}
		}
		c=c+1;
	}

 	printf("\n\n");
	system("pause");
}

