#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>

main()
{

	//setlocale(LC_ALL, "spanish"); /* Permite imprimir caracteres con tilde */
	setlocale(LC_CTYPE,"Spanish");
	char palabra[100];
	FILE *punt_texto;
	punt_texto=fopen("ejemplok4.txt","r");
	if(punt_texto==NULL)
	{
		printf("\nError... Archivo no encontrado....");
		exit(1);
	}
	
	while(!feof(punt_texto))
	{
	printf("%c",getc(punt_texto));
		Sleep(500);
		
	}
	fclose(punt_texto);
	printf("\n\n");
	system("pause");
}

