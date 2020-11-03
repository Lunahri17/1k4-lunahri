#include <stdio.h>
#include <stdlib.h>


main()
{
    FILE *nombre;
    nombre = fopen("nombres.txt", "r");
    if (nombre == NULL)
    {
        printf("El archivo no existe \n");
        exit (EXIT_FAILURE);
    }
    else
    {
        while (!feof(nombre))
        {
            printf("%c",getc(nombre));
             /* Obtiene un caracter del archivo */                           
            /* Lo despliega en pantalla y continua... */
        }
       /* hasta encontrar EOF (el final del archivo)*/
    }
    fclose(nombre);

}
