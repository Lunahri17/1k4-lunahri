#include <stdio.h>
#include <conio.h>
#include <string.h>

main ()
{   
    char apellido[30], nombre[30],apeynom[60]="PEREZ";
    
    printf("\n\nIngrese Apellido:");
    //scanf("%s",apellido);
    gets(apellido);
    
    printf("\n\nIngrese Nombre:");
    //_flushall();
	//scanf("%s",nombre);
    gets(nombre);
	
	//printf("\nApellido:%s",apellido);
	//printf("\nNombre:%s",nombre);
	printf("\nApellido:");
	puts(apellido);
	printf("Nombre:");
	puts(nombre);
	
	printf("\nInicio Concatenacion\n"); 
	//apeynom="PEREZ"; ERROR
	
	//realiza asignacion
    strcpy(apeynom,apellido);
    puts(apeynom);
    
    //concatenar - agregar a la cadena
    strcat(apeynom,", ");
    puts(apeynom);
    
    strcat(apeynom,nombre); 
	printf("\n%s",apeynom);
    
    
    //pone todo en minuscula
    strlwr(apeynom);
    printf("\n%s",apeynom);
    
    //pone todo en mayusculas
    strupr(apeynom);
    printf("\n%s",apeynom);
    
}
