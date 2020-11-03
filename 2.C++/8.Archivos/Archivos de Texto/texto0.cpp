#include <stdio.h>
#include <string.h>


main()
{
    FILE *fp;
    int n,i;
    char cadena[40];
    
    fp = fopen("nombres.txt", "w"); /* Abrir archivo para escritura */
    
    printf("Ingrese la cantidad de cadenas: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("Ingrese cadena: ");
        _flushall();
        gets(cadena);
        fprintf(fp,strcat(cadena,"\n"));
    }
    
    fclose(fp); /* Cerrar el archivo antes de terminar el programa */
    
    printf("Se ha creado el archivo: nombres.txt \n");
    
}
