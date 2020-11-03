#include <stdio.h>
#include <conio.h>

struct registro
{
    int leg;
    char ayn[30];
    float sueldo;
    bool borrado;
};

main (void)
{
    registro reg;
    FILE *arch;
        
    /*Listado*/
    
    arch=fopen("empleados.dat","r+b");                                                    
    fread(&reg,sizeof(registro),1,arch);
    while (!feof(arch))
    {
        if (reg.borrado==false)
        {
            printf("Legajo: %d\n",reg.leg);
            printf("Apellido y Nombre: %s\n",reg.ayn);
            printf("Sueldo: %.2f\n",reg.sueldo);
        }
        fread(&reg,sizeof(registro),1,arch);     
    }
    fclose(arch);
    getch();
}
