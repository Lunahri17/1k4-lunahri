#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

//Protipos de funciones:
void end();
void Mostrar(char Nombres[100]);

main()
{
	char Nombres[100];

    _flushall();
    printf("\nIngresa los nombres separados por una , : ");
    gets(Nombres);
	_flushall();

    Mostrar(Nombres);
    
	end();
}

void Mostrar(char Nombres[100])
{
    int i=0;

    do
    {
        printf("%c",Nombres[i]);
        i++;
    } while (Nombres[i]!=NULL);
    
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}