#include<stdio.h>
#include<stdlib.h>
#include<libreria_1.h>


main()
{
	int c,n,num,cp=0,c5=0,c6=0;
	
	printf("Ingrese N: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&num);
		
		contador(num,2,cp);
		contador(num,5,c5);
		contador(num,6,c6);
		
	}
	
	printf("\nCantidad de pares: %d\n",cp);
	printf("Cantidad de Multiplos de 5: %d\n",c5);
	printf("Cantidad de Multiplos de 6: %d\n",c6);
	
	printf("\nPorcentaje de pares: %.2f\n",porcentaje(cp,n));
	printf("Porcentaje de Multipos de 5: %.2f\n",porcentaje(c5,n));
	printf("Porcentaje de Multiplos de 6: %.2f\n",porcentaje(c6,n));
	
 	printf("\n\n");
	system("pause");
}



