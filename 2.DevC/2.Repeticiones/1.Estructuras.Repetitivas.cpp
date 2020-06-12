#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int x,n;
	//Estructuras repetitivas
	
	//For
	//inicio de la variable (se debe declarar esta variable).;Condicion de conteo.;Cuanto suma por repetición.
	for(c=0;c<n;c=c+1) //c++ es igual a c=c+1; c-- es igual a c=c-1
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&x);
		
	}
	
	//While
	while(c<n)
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&x);
		
		c++; //tambien se puede poner c++ en lugar de c=c+1.
	}
	
	//do-while
	do
	{
		printf("\nIngrese el primer numero: ");
		scanf("%d",&x);
	
		
		printf("\nDesea ingresar datos? (1=Si 0=No): ");
		scanf("%d",&n);
	}
	while(n!=0); //Condicion de funcionamiento del mientras, en este caso: Funcionar mientras "n" sea distinto de cero.
	

 	printf("\n\n");
	system("pause");
}

