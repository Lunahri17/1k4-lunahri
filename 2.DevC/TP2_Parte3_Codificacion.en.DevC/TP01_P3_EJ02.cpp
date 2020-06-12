#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{	
	float pgb,pmb,cds1;
	int cds2;
	
	printf("Ingrese la cantidad de Gigabytes: ");
	scanf("%f",&pgb);
	
	pmb=pgb*1024;
	cds1=pmb/700;
	cds2=cds1;
	
	if(cds1>cds2)
	{
		cds2=cds2+1;
		printf("Necesitrara un total de: %d",cds2);
		printf(" CDs.");
	}
	else
	{
		printf("Necesitrara un total de: %.0f",cds1);
		printf(" CDs.");
	}

 	printf("\n\n");
	system("pause");
}

