#include<stdio.h>
#include<stdlib.h>

int n,c=0;
int suma=0,x; //simpre incializar los contadores
//float suma=0,x;

main()
{
	printf("\nIngrese la cantidad de elementos: ");
	scanf("%d",&n);
	
	
	while(c<n)
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&x);
		
		//si c mod 2=0; Si el c empieza en 1, el mod debe ser != 0 
		if(c%2==0)
		{
			suma=suma+x;
		}
		c++; //tambien se puede poner c++ en lugar de c=c+1
	}
	
	printf("\nLa suma de los numeros en la posicion impar es: %d\n", suma);
	
 	system("pause");
}
