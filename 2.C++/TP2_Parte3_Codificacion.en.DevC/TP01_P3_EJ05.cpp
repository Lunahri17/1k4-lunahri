#include<stdio.h>
#include<stdlib.h>

main()
{
	int n,e,s,p,cpma=0,cp=0,cpf=0,ppsf=0;
	
	printf("¿Entro un nuevo paciente?(1 = Si,0 = No): ");
	scanf("%d",&n);
	
	do
	{
		printf("\nEdad del paciente: ");
		scanf("%d",&e);
		
		printf("Sexo del paciente (1 = Masculino, 2 = Femenino): ");
		scanf("%d",&s);
		
		printf("Patologia del paciente\n");
		printf("(0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonia, 3 = Bronquitis): ");
		scanf("%d",&p);
		
		if(s==1 or s==2)
		{
			cp=cp+1;
		}
		
		if(s==1 and p==1)
		{
			cpma++;
		}
		
		if(s==2)
		{
			cpf=cpf+1;
		}
		
		printf("\n¿Entro un nuevo paciente?(1=Si,0=No): ");
		scanf("%d",&n);
	}
	while(n==1);
	
	if(cp>0)
	{
		ppsf=(cpf*100)/cp;
		
		printf("\nPorcentaje de pacientes femeninos: %d",ppsf);
		printf("\nCantidad de pacientes masculinos con Gripe A: %d",cpma);
	}
	else
	{
		printf("\nNo ingresaron pacientes.");
	}
	


 	printf("\n\n");
	system("pause");
}

