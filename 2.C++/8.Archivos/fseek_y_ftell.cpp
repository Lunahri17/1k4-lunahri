#include<stdio.h>

 #include<stdlib.h>

 #include <locale.h>



main()

 {​​


 setlocale(LC_CTYPE,"Spanish");/* Permite imprimir caracteres con tilde */

 FILE *morales;

 morales=fopen("c:\\respaldo\\octubre\\comisionk4.txt ","w+");

 fseek(morales,5,SEEK_SET);

 fputs("Algoritmo",morales);

 fseek(morales,15,SEEK_CUR);

 fputs("Facultad Regional Tucumán - UTN",morales);

 printf("\nMorales está en: %d",ftell(morales));

 fseek(morales,2,SEEK_END);

 fputs("***",morales);

 fseek(morales,-41,SEEK_END);

 fputs("***",morales);

 //fseek(morales,0,SEEK_SET);

 rewind(morales);

 printf("\nMorales está en: %d",ftell(morales));

 printf("\n\n");

 system("pause");

 fclose(morales);

 }​​