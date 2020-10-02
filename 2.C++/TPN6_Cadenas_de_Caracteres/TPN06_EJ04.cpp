#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

//Protipos de funciones:
void end();

main()
{
	char poema[200];
    int i=0,Mayusculas=0,Minusculas=0,Consonantes=0,Vocales=0,Digitos=0,Signos=0,Espacios=0;

    printf("\nIngrese el poema: ");
    _flushall();
    gets(poema);
    _flushall();

    do
    {
        //Busqueda de consonantes Mayusculas y letras maysuculas.
        if ((poema[i]>65 and poema[i]<69) or (poema[i]>69 and poema[i]<73) or (poema[i]>73 and poema[i]<79) or (poema[i]>79 and poema[i]<85) or (poema[i]>85 and poema[i]<91))
        {
            Consonantes++;
            Mayusculas++;
        }
        
        //Busqueda de consonantes Minusculas y letras minusculas.
        if ((poema[i]>97 and poema[i]<101) or (poema[i]>101 and poema[i]<105) or (poema[i]>105 and poema[i]<111) or (poema[i]>111 and poema[i]<117) or (poema[i]>117 and poema[i]<123))
        {
            Consonantes++;
            Minusculas++;
        }

        //Busqueda de vocales Mayusculas y letras mayusculas.
        if (poema[i]==65 or poema[i]==69 or poema[i]==73 or poema[i]==65 or poema[i]==65)
        {
            Vocales++;
            Mayusculas++;
        }
        
        //Busqueda de vocales minusculas y letras minusculas.
        if (poema[i]==97 or poema[i]==101 or poema[i]==105 or poema[i]==111 or poema[i]==117)
        {
            Vocales++;
            Mayusculas++;
        }
        
        //Busqueda de digitos.
        if (poema[i]>47 and poema[i]<58)
        {
            Digitos++;
        }
        

        //Singos de puntuación.
        if ((poema[i]>57 and poema[i]<64) or (poema[i]>93 and poema[i]<97) or (poema[i]>122 and poema[i]<127) or poema[i]==168 or poema[i]==173 or poema[i]==33 or (poema[i]>38 and poema[i]<47) or (poema[i]>237 and poema[i]<241))
        {
            Signos++;
        }
        
        //Espacios.
        if (poema[i]==32)
        {
            Espacios++;
        }

        i++;
    } while (poema[i]!=NULL);
    
	printf("\n\n\tDATOS DEL POEMA");

    printf("\n Cantidad de consonantes: %d",Consonantes);
    printf("\n Cantidad de vocales: %d",Vocales);
    printf("\n Cantidad de digitos: %d",Digitos);
    printf("\n Cantidad de signos de puntuacion: %d",Signos);
    printf("\n Cantidad de mayusculas: %d",Mayusculas);
    printf("\n Cantidad de minusculas: %d",Minusculas);
    printf("\n Cantidad de espacios: %d",Espacios);

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