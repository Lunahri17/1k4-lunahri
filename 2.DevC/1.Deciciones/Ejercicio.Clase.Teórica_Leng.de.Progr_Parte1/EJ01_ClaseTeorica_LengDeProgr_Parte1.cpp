#include <stdio.h>

int ch;
float vh,s,scd,p;

/* especificadores de formato
int %d
float %f
char %c

scanf (" formato ",& aqui variable )
\n realiza salto de linea 	*/


main()
{
	printf("Ingrese la cantidad de horas:");
	scanf("%d",&ch);
	
	printf("Ingrese el valor de la horas:");
	scanf("%f",&vh);
	
	if(ch==0)
	{
		printf("\nNo trabajo");
	}
	else
	{
		s=vh*ch;
		scd=s*0.86;
		
		if (ch>60)
		{
			p=s*0.05;
			scd=scd+p;
		}
		printf("Sueldo: %.2f",scd);
	}
}
