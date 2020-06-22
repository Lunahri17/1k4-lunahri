//Hacer un menu que considere las siguientes opciones:
	//Caso 1: Cubo de un numero.
	//Caso 2: Numero par o impar.
	//Caso 3: Salir.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cubos();
void paridad();


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
		switch(opcion)
		{
			case 1: //if(opcion==1)
				cubos();			
				break;
		
			case 2: //if(opcion==2)
				paridad();
				break;
			
			case 3: //if(opcion==3)
				printf("\nty bro.");
				break;
			
			default: //if(opcion<=0 or opcion>3)
				printf("\nNo corresponde a ninguna opcion del menu.");
				break;
			
		}
		printf("\n\n");
		system("pause");
	}
	while(opcion!=3);
}

void cubos()
{
	int opcion,n,cubo;
	printf("\nIngrese un numero para sacar si cubo: ");
	scanf("%d",&n);
				
	cubo=n*n*n;
				
	printf("\nEl cubo de %d es: %d",n,cubo);
}

void paridad()
{
	int opcion,n,cubo;
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
