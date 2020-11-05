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
    int n,i;
    
    /*Alta*/
    printf("Ingrese la cantidad de articulos: ");
    scanf("%d",&n);
    
    arch=fopen("articulos.dat","w+b");
    
    printf("\n\nIngrese los datos del registro\n");
    for (i=0;i<n;i++)
    {
        printf("\nCodigo   : ");
        scanf("%d",&reg.codigo);
        
        _flushall();
        printf("Descripcion: ");
        gets(reg.descri);
        
        printf("Precio: ");
        scanf("%f",&reg.precio);
        
        reg.borrado=false;
        fwrite(&reg,sizeof(registro),1,arch);
    }
    fclose(arch);
}

