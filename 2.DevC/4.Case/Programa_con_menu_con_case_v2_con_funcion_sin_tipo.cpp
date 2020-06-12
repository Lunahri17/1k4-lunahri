//Hacer un menu que considere las siguientes opciones:
	//Caso 1: Cubo de un numero.
	//Caso 2: Porcentaje de numeros impares.
	//Caso 3: Promedio de N numeros.
	//Caso 4: Inverso de un numero de 2 digitos.
	//Caso 5: Salir.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void opcion1();
void opcion2();
void opcion3();
void opcion4();

main()
{
	int opcion;
	
	do
	{
		system("cls"); //cls Significa limpiar el texto de la app
		printf("\n\tMenu");  // el \t es tabulacion
		printf("\n\n1- Cubo de un numero.");
		printf("\n\n2- Porcentaje de numeros impares.");
		printf("\n\n3- Promedio de N numeros.");
		printf("\n\n4- Inverso de numero de 2 digitos.");
		printf("\n\n5- Salir.");
		printf("\n\nIngrese la opcion: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				opcion1();
				break;
						
			case 2:
				opcion2();
				break;
			case 3:
				opcion3();
				break;
			
			case 4:
				opcion4();
				break;
			
			case 5:
				printf("\nGracias por usar el programa.");
				break;
			
			default:
				printf("\nNo corresponde a ninguna opcion del menu.");
				break;
		}
		printf("\n\n");
		system("pause");
	}
	while(opcion!=5);
}

void opcion1()
{
	system("cls");
	printf("\tCalculo del cubo de un numero:\n");
	int n,cubo;
	
	printf("\nIngrese un numero para sacar si cubo: ");
	scanf("%d",&n);
				
	cubo=n*n*n;
				
	printf("\nEl cubo de %d es: %d",n,cubo);
				
}

void opcion2()
{
	system("cls");
	printf("\tCalculo del porcentaje de numeros impares:\n");
	
	int n,ni=0,nt=0;
	float p;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		if(n%2!=0)
		{
			ni++;
		}
		
		nt++;
		
		printf("\nIngrese otro numero (Ingrese 0 para terminar): ");
		scanf("%d",&n);
	}
	
	if(nt>0)
	{
		p=(ni*100)/nt;
		
		printf("\nEl porcentaje de numeros impares es: %.2f",p);
	}
	else
	{
		printf("\nCancelo la operacion.");
	}
	
}

void opcion3()
{
	system("cls");
	printf("\tCalculo del promedio de N numeros:\n");
	
	int n,c,x;
	float p,t=0;
	
	printf("\nIngrese la cantidad de numeros para promediar: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("Ingrese el numero: ");
		scanf("%d",x);
		
		t=t+x;
	}
	
	if(n>0)
	{
		p=t/n;
		
		printf("\nEl promedio es: %.2f",p);
	}
	else
	{
		system("cls");
		printf("\nSe cancelo la operacion.");
	}
	
}

void opcion4()
{
	system("cls");
	printf("\tCalculo del inverso de un numero de dos cifras:\n");

	int n,a,b,x,c=0;

	while(c<1)
	{
		printf("\nIngrese un numero de 2 digitos: ");
		scanf("%d",&n);
		
		if(n>9 and n<100 or n<-9 and n>-100)
		{
			b=n%10;
			a=n/10;
			x=b*10+a;
	
			printf("\nEl inverso de %d es: %d",n,x);
			c++;
		}
		else
		{
			printf("\nNo se ingreso un numero de 2 cifras.\n");
		}
	}

}


