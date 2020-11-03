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
    FILE *arch,*auxiliar;
    int b,legajo; //b=0 no lo encontro b=1 encontro
        
    /*Baja Fisica*/
    
    arch=fopen("empleados.dat","r+b");      
    auxiliar=fopen("auxiliar.dat","wb");
    
    printf("Ingrese un numero de legajo a dar de BAJA: ");
    scanf("%d",&legajo);
    
    fread(&reg,sizeof(registro),1,arch);
    b=0;
    while (!feof(arch))
    {
          if (reg.leg!=legajo)
             fwrite(&reg,sizeof(registro),1,auxiliar);
          else
              b=1;
          fread(&reg,sizeof(registro),1,arch);
    }
    
    if (b==1)
    {
       printf("\n\nRegistro dado de baja");
    } 
    fclose(arch);
    fclose(auxiliar);
    remove("empleados.dat");
    rename("auxiliar.dat","empleados.dat");
}
