#include <stdio.h>
#include <string.h>


main()
{
    FILE *fp;
    
    fp = fopen("nombres.txt", "w"); /* Abrir archivo para escritura */
    
    fprintf(fp, "Juan Perez\n");
    fprintf(fp, "Pedro Andrada \n");
    fprintf(fp, "Matias Lagarde\n");
    fprintf(fp, "Julian Ortiz\n");
    fprintf(fp, "Belen Medina\n");
    
    fclose(fp); /* Cerrar el archivo antes de terminar el programa */
    
    printf("Se ha creado el archivo: nombres.txt \n");
   
}
