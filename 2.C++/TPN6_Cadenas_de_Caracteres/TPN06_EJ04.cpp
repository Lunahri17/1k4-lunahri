#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

//Protipos de funciones:
void end();

main()
{
	char poema[200];
    int i=0,Consonantes=0;

    printf("\nIngrese el poema: ");
    puts(poema);


    do
    {
        //Busqueda de consonantes Mayusculas
        if ((poema[i]>65 and poema[i]<69) or (poema[i]>69 and poema[i]<73) or (poema[i]>73 and poema[i]<79) or (poema[i]>79 and poema[i]<85) or (poema[i]>85 and poema[i]<91))
        {
            Consonantes++;
        }
        
        //Busqueda de consonantes Minusculas
        if ((poema[i]>97 and poema[i]<101) or (poema[i]>101 and poema[i]<105) or (poema[i]>105 and poema[i]<111) or (poema[i]>111 and poema[i]<117) or (poema[i]>117 and poema[i]<123))
        {
            Consonantes++;
        }

        i++;
    } while (poema[i]!=NULL);
    
	printf("\n\n\tDATOS DEL POEMA:");

    printf("\n Cantidad de consonantes: %d",Consonantes);
    
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