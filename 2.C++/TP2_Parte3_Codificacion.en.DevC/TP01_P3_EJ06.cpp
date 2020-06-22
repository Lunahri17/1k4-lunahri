#include<stdio.h>
#include<stdlib.h>

main()
{
	float n=0,e,d,s,c1=0,cm=0,cf=0,c2=0;
	
	printf("Ingrese el nuemro de socio (0 = Para cerrar): ");
	scanf("%f",&n);
	
	while(n!=0)
	{
		printf("\nIngrese la edad del socio: ");
		scanf("%f",&e);
		
		printf("Ingrese el deporte que realiza");
		printf("(1 = Futbool, 2 = Natacion, 3 = Jockey): ");
		scanf("%f",&d);
		
		printf("Ingrese el sexo del socio (1 = Masculino, 2 = Femenino): ");
		scanf("%f",&s);
		
		if(e<51 and e>29 and d==1)
		{
			c1++;
		}
		if(s==1)
		{
			cm++;
		}
		else
		{
			cf++;
		}
		if(e<16)
		{
			c2++;
		}
				
		printf("\nIngrese el nuemro de socio (0 = Para cerrar): ");
		scanf("%f",&n);
	}

	printf("\nSocios que practican futbol y tienen entre 30 y 50 años: %.0f\n",c1);
	printf("\nCantidad de socios femeninos : %.0f",cf);printf(" Y cantidad de socios masculinos: %.0f\n",cm);
	printf("\nCantidad de socios menores de 16 años: %.0f",c2);

}
