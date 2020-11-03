#include <stdio.h>
#include <conio.h>
#include <string.h>

struct registro
{
    int leg;
    char ayn[30];
    float sueldo;
    bool borrado;
};

main ()
{
    registro reg;
    FILE *arch;
    int n,c;
    
    /*Alta*/
    printf("Ingrese la cantidad de empleados: ");
    scanf("%d",&n);
    
    arch=fopen("empleados.dat","w+b");
    
    for (c=0;c<n;c++)
    {
        printf("\n\nIngrese los datos del registro\n\n");
        printf("Legajo           : ");
        scanf("%d",&reg.leg);
        _flushall();
        printf("Apellido y Nombre: ");
        gets(reg.ayn);
        printf("Sueldo           : ");
        scanf("%f",&reg.sueldo);
        reg.borrado=false;
        fwrite(&reg,sizeof(registro),1,arch);
    }
    fclose(arch);
}
