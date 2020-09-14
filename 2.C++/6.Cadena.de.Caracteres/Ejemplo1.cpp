#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
    char apellido[30],nombre[30],apeynom[60];

    printf("\n\nIngrese el Apellido: ");
    //scanf("%s",apellido);
    gets(apellido); //Permite leer cadena de caracteres.

    
    
    printf("\n\nIngrese el Nombre: ");
    
    _flushall(); //Limpia el buffer del teclado, para así evitar que se llene el siguiente scanf con lo que escribimos luego de que termina la cadena
    
    //scanf("%s",nombre);
    gets(nombre); //tambien permite meter cadenas de más de una palabra.

    //printf("\nApellido: %s",apellido);
    //printf("\nNombre: %s",nombre);

    printf("\nApellido: ");
    puts(apellido); //El "puts()" ya tiene incorporado un salto de linea al final.
    printf("Nombre: ");
    puts(nombre);


    printf("\nInicio de Concatenación: ");

    strcpy(apeynom,apellido); //Asigna lo que esta en la segunda variable a la primera.
    puts(apeynom);

    strcat(apeynom,", "); //Sirve para concatenar.
    puts(apeynom);

    strcat(apeynom,nombre);
    puts(apeynom);


    //Minuscula
    strlwr(apeynom);
    puts(apeynom);

    //Mayuscula
    strupr(apeynom);
    puts(apeynom);
}