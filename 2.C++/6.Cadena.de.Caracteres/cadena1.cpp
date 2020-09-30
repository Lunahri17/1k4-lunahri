#include <stdio.h>
#include <conio.h>
#include <string.h>

main ()
{   
    char apellido[30], nombre[30],apeynom[60];
    
    printf("\n\nIngrese Apellido:");
    gets(apellido);
    
    printf("\n\nIngrese Nombre:");
    gets(nombre);    
    
    strcpy(apeynom,apellido);
    strcat(apeynom,", ");
    strcat(apeynom,nombre);   
    printf("\n%s",apeynom);
    
    strlwr(apeynom);
    printf("\n%s",apeynom);
    
    strupr(apeynom);
    printf("\n%s",apeynom);
    
    getch();
}
