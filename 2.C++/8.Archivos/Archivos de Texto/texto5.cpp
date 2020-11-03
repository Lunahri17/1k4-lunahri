#include <stdio.h>
#include <stdlib.h>


main()
{
    FILE *fp1;
    char palabra[100];
    
    fp1 = fopen("nombres.txt", "r");
    
    if (fp1 == NULL)
    {
        printf("Error al abrir el archivo \n");
        exit (EXIT_FAILURE);
    }
    
    fgets(palabra, 100, fp1); /* Obtiene una linea del archivo */    
    while (!feof(fp1))
    {
        printf("%s", palabra); /* La despliega en pantalla */
        //fgets(palabra, 100, fp1);
        fgets(palabra, 100, fp1); /* Obtiene una linea del archivo */            
    }
    printf("%s", palabra);
    fclose(fp1);


}
