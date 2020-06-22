//Hacer un menu que considere las siguientes opciones:
	//Caso 1: Cubo de un numero.
	//Caso 2: Porcentaje de numeros impares.
	//Caso 3: Promedio de N numero.
	//Caso 4: Inverso de numero de 2 digitos.
	//Caso 5: Salir.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int opcion,n,cubo;
	//float ;
	
	do
	{
		system("cls"); //cls Significa limpiar el texto de la app
		printf("\n\tMenu");  // el \t es tabulacion
		printf("\n\n1- Cubo de un numero.");
		printf("\n\n2- Paridad de un numero.");
		printf("\n\n3- Salir.");
		printf("\n\nIngrese la opcion: ");
		scanf("%d",&opcion);
		
		if(opcion==1)
		{
			printf("\nIngrese un numero para sacar si cubo: ");
			scanf("%d",&n);
			
			cubo=n*n*n;
			
			printf("\nEl cubo de %d es: %d",n,cubo);
			
			printf("\n\n");
			system("pause");
		}
		
		if(opcion==2)
		{
			printf("\nIngrese un numero para saber su paridad: ");
			scanf("%d",&n);

			if(n%2==0)
			{
				printf("\nEl numero %d es par.",n);
				printf("\n\n");
				system("pause");
			}
			else
			{
				printf("\nEl numero %d es impar.",n);
				printf("\n\n");
				system("pause");
			}
		}
		
		if(opcion==3)
		{
			printf("\nty bro.");
		}
		
		if(opcion<=0 or opcion>3)
		{
			printf("\nNo corresponde a ninguna opcion del menu.");
			printf("\n\n");
			system("pause");
		}
		
	}
	while(opcion!=3);
}

