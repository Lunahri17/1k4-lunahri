#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

//Protipos de funciones:
void end();
void Mostrar(char Nombres[100]);
int CantidadDeCaracteres(char Nombres[100]);

main()
{
	char Nombres[100];

    _flushall();
    printf("\nIngresa los nombres separados por una , : ");
    gets(Nombres);
	_flushall();

    Mostrar(Nombres);

    printf("\nLa longitud de la cadena es: %d.",CantidadDeCaracteres(Nombres));
    
	end();
}

void Mostrar(char Nombres[100])
{
    int i=0;

    do
    {
        if (Nombres[i]==44)
        {
            printf("\n");
        }
        else
        {
            printf("%c",Nombres[i]);    
        }
        
        i++;
    } while (Nombres[i]!=NULL);
}

int CantidadDeCaracteres(char Nombres[100])
{
    int i=0;
    
    do
    {
        i++;
    } while (Nombres[i]!=NULL);
    
    return i;
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}