#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

//Protipos de funciones:
void end();

main()
{
	char Palabra[] = "final",PalabraMasLarga[50]="a";

    typedef char Cadena[50];
    Cadena Palabras[50];
    
    int i=0;
    
    bool stop=false;

    do
    {
        printf("Ingrese la palabra %d: ",i);
        _flushall();
        gets(Palabras[i]);
        strlwr(Palabras[i]);

        if (strcmp(Palabras[i],Palabra)!=0)
        {
            if (strlen(Palabras[i])>strlen(PalabraMasLarga))
            {
                strcpy(PalabraMasLarga,Palabras[i]);
            }

            i++;
        }
        else
        {
            stop=true;
        }

    } while (stop==false);
    
	printf("La palabra mas larga ingresada fue: ");
    puts(PalabraMasLarga);

    printf("Se ingresaron %d palabras",i);

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