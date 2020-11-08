#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//Protipos de funciones:
void end();

main()
{
	setlocale(LC_CTYPE,"Spanish");

	FILE *arch1,*arch2,*archcomb;
	char frase[80];
	int opcion;
	
	arch1=fopen("Archivo1.txt","w");
	arch2=fopen("Archivo2.txt","w");

	do
	{
		system("cls");
		printf("\n\tSistema de frases para 2 empleados.");
		printf("\n1. Cargar frases de José Luis.");
		printf("\n2. Cargar frases de María Emilia.");
		printf("\n3. Terminar el día.");
		printf("\nIngrese la opción: ");
		scanf("%d",&opcion);

		switch (opcion)
		{
		case 1:
			
			break;

		case 2:
			
			break;

		case 3:
			
			break;
		
		default:
			printf("\nIngresó una opción incorrecta, vuelva a intentarlo.");
			break;
		}
	} while (opcion!=3);
	
	
	end();
}



void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}