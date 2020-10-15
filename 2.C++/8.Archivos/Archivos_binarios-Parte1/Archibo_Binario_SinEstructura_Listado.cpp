#include <stdio.h>

main (void)
{
    FILE *arch;
    float nota;
    
    /*Listado*/
     
    arch=fopen("Notas.dat","r+b");
    
    printf("Notas almacenadas:\n");
    fread(&nota,sizeof(float),1,arch);
    while (!feof(arch))
    {
        printf("Nota: %.2f\n",nota);
        fread(&nota,sizeof(float),1,arch);
    }
    fclose(arch);
    
}

