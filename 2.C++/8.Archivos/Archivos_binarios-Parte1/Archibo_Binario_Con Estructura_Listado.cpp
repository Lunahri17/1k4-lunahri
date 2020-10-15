#include <stdio.h>
#include <string.h>

struct registro
{
    int codigo;
    char descri[30];
    float precio;
    bool borrado;
};

main (void)
{
    registro reg;
    FILE *arch;
        
    /*Listado*/
    arch=fopen("articulos.dat","r+b");
    
    printf("\n\nDatos grabados en el archivo\n");
    fread(&reg,sizeof(registro),1,arch);
    while (!feof(arch))
    {
        
        printf("\nCodigo:%d\n",reg.codigo);
        printf("Descripcion: ");
        puts(reg.descri);
        printf("Precio: %.2f\n",reg.precio);
        fread(&reg,sizeof(registro),1,arch);
    }
    fclose(arch);
}

