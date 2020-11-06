/* Dado el archivo empleado.dat, modificar en un 10% todos los sueldos*/
   
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

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
    int b;
    int legajo;
           
    printf("Ingrese el legajo a modificar= "); 
    scanf("%d",&legajo);        
    b=0;
    arch=fopen("empleados.dat","r+b");                                                    
    fread(&reg,sizeof(registro),1,arch);
    
    while(!feof(arch) && b==0)
    {  
     
         if (reg.leg==legajo && reg.borrado==false)
         {  
                printf("Ingrese el nuevo sueldo= "); 
                scanf("%f",&reg.sueldo);
				        
                fseek(arch,- sizeof(registro),SEEK_CUR); 
                
                fwrite(&reg,sizeof(registro),1,arch);
                b=1;
         }
         else
         {
             fread(&reg,sizeof(registro),1,arch);
         }
    }
    if (b==0)
       printf("Legajo no encontrado");
    else
        printf("Legajo modificado");
    //fclose(arch);
    
      
    rewind(arch);    
    fread(&reg,sizeof(registro),1,arch);
  
    while(!feof(arch))
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
