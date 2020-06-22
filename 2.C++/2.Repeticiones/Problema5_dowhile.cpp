#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{	
	int n,x1,x2,prod=0;

	printf("Desea ingresar datos? (1=Si 0=No): ");
	scanf("%d",&n);

	do
	{
		printf("\nIngrese el primer numero: ");
		scanf("%d",&x1);
	
		printf("Ingrese el segundo numero: ");
		scanf("%d",&x2);
	
		prod=x1*x2;
	
		if(prod<0)
		{
			printf("\nEl producto es negativo");
		
			if(x1<0)
			{
				printf("\nEl numero negativo es primer numero ingrsado: %d",x1);
			}
			else
			{
				printf("\nEl numero negativo es segundo numero ingrsado: %d",x2);
			}
		}
		else
		{
			printf("\nEl producto es positivo");
		}
		
		printf("\nDesea ingresar datos? (1=Si 0=No): ");
		scanf("%d",&n);
	}
	while(n!=0);
	
 	printf("\n\n");
	system("pause");
}

