#include <stdio.h>

main (void)
{
    FILE *arch;
    int n,i;
    float nota;
    
    /*Alta*/
    printf("Ingrese la cantidad de notas: ");
    scanf("%d",&n);
    
    arch=fopen("notas.dat","w+b");
    
    printf("\n\nIngrese las notas:\n");
    for (i=0;i<n;i++)
    {
        printf("Nota: ");
        scanf("%f",&nota);
       
        fwrite(&nota,sizeof(float),1,arch);
    }
    fclose(arch);
    
}

