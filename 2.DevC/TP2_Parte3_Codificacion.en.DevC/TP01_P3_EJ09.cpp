#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{	
	float pgb,pmb,cds1,cdst=0;
	int n,c,cds2,cdst2=0;
	
	printf("Ingrese cuantos discos rigidos quiere hacer la copia de seguridad: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngrese la cantidad de Gigabytes: ");
		scanf("%f",&pgb);
	
		pmb=pgb*1024;
		cds1=pmb/700;
		cds2=cds1;
		cdst=cdst+cds1;
		
		if(cds1>cds2)
		{
			cds2=cds2+1;
			printf("\nNecesitrara un total de: %d",cds2);
			printf(" CDs.\n");
		}
		else
		{
			printf("\nNecesitrara un total de: %.0f",cds1);
			printf(" CDs.\n");
		}
	}
	
	if(n>0)
	{
		cdst2=cdst;
	
		if(cdst>cdst2)
		{
			cdst2=cdst2+1;
			printf("\nNecesitrara en total, para todos sus discos duros, la cantidad de: %d",cdst2);
			printf(" CDs.\n");
		}
		else
		{
			printf("\nNecesitrara en total, para todos sus discos duros, la cantidad de: %.0f",cdst);
			printf(" CDs.\n");
		}
	}

 	printf("\n\n");
	system("pause");
}

