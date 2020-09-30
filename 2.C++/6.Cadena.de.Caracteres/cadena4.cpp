#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
      typedef char cadena[30];
      cadena nombre[30];
      int i;
     
     for (i=0;i<3;i++)
     {
         gets(nombre[i]);
     }
     
     printf("\n");
     for (i=0;i<3;i++)
     {
         puts(nombre[i]);
     }         
      
}
