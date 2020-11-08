#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//Protipos de funciones:
void end();
void carga_arch1(FILE *arch1,char frase[80]);

main()
{
	setlocale(LC_CTYPE,"Spanish");

	FILE *arch1,*arch2,*archcomb;
	char frase[80];
	int opcion;
	
	arch1=fopen("Archivo1.txt","a+");
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
			carga_arch1(arch1,frase);
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
	
	fclose(arch1);
	fclose(arch2);
	
	end();
}

void carga_arch1(FILE *arch1,char frase[80])
{
	printf("\nIngrese la/s frase/s (Ingrese 'final' para terminar): ");
	_flushall();
	gets(frase);
	while (strcmp(frase,"final")==0)
	{
		fprintf(arch1,strcat(frase,"\n"));
		printf("\nIngrese la/s frase/s (Ingrese 'final' para terminar): ");
		_flushall();
		gets(frase);
	}
	
}


void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}