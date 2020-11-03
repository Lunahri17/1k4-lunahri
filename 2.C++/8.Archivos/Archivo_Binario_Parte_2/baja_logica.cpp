/* Dado el archivo empleados.dat, ingresar un legajo de un empleado y realizar 
   la baja lógica de este registro en el archivo.*/
   
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

main ()
{
    registro reg;
    FILE *arch;
    int b;
    int legajo;
            
    printf("Ingrese el legajo a dar de baja= "); 
    scanf("%d",&legajo);        
      
    arch=fopen("empleados.dat","r+b");                                                    
    fread(&reg,sizeof(registro),1,arch);
    b=0;
    while(!feof(arch) && b==0)
    {  
       if (reg.leg==legajo && reg.borrado==false)
       {
                reg.borrado=true;
                
                fseek(arch,- sizeof(registro),SEEK_CUR); 
                
				fwrite(&reg,sizeof(registro),1,arch);
                printf("Registro dado de baja\n\n");
                getch();
                b=1;
       } 
       else
       {
              fread(&reg,sizeof(registro),1,arch);  
       }  
    }
  
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

