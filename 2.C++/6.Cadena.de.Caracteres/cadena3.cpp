#include <stdio.h>
#include <conio.h>
#include <string.h>

main ()
{   
    char ape1[30], ape2[30];
    int valor;
    
    printf("\n\nIngrese apellido 1:");
    gets(ape1);
    
    printf("\n\nApellido 2:");
    gets(ape2);    
    
    //compara la primera cadena con la segunda
	valor=strcmp(ape1,ape2);
    if (valor==0)
       printf("Iguales");    
    if (valor<0)
       printf("Menor %s",ape1);  
    if (valor>0)
       printf("Mayor %s",ape1);        

}
