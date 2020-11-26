/*ESTRUCTURA DINÁMICA DE PILA
  ---------------------------
  CREE UN ARCHIVO PARA ALMACENA LA INFORMACIÓN DE N EMPLEADOS DE 
  UNA FABRICA DE LAS CUALES SE DEBE GUARDAR, LA SIGUIENTE INFORMACIÓN:
      - LEGAJO
      - APELLIDO Y NOMBRE
      - EDAD
  LUEGO:
      A) PASE LA INFORMACION DE LOS REGISTROS A UNA ESTRUCTURA DINAMICA DE PILA
      B) De la pila BORRE LA INFORMACIÓN DE UNO DE LOS NODOS
      C) MUESTRE LA INFORMACIÓN QUE QUEDÓ EN LA PILA*/
      
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct registro
{
       int legajo;
       char apeynom[60];
       int edad;
};

struct nodo
{
       registro info;
       nodo *sig;
};

void inicializar(nodo *&frente);
void insertar(nodo *&frente,registro x);
int borrar(nodo *&frente);

main()
{
    nodo *frente,*p;
    int i,n;
    registro x;
    
    FILE *arch;
    arch=fopen("empleados.dat","w+b");
    
    printf("Ingrese la cantidad de empleados: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("\n");
        printf("Legajo           : ");
        scanf("%d",&x.legajo);
        _flushall();
        printf("Apellido y Nombre: ");
        gets(x.apeynom);
        printf("Edad             : ");
        scanf("%d",&x.edad);
        fwrite(&x,sizeof(registro),1,arch);
    }
        
        
    inicializar(frente);
    
    rewind(arch);
    fread(&x,sizeof(registro),1,arch);
    
    while (!feof(arch))
    {
        insertar(frente,x);
        fread(&x,sizeof(registro),1,arch);        
    }
    
    printf("\n\nSE BORRA EL REGISTRO DE LEGAJO NRO: %d\n\n", borrar(frente));
    
    p=frente;
    while (p!=NULL)
    {
          printf("\n");
          printf("Legajo           : %d\n",p->info.legajo);
          printf("Apellido y Nombre: %s\n",p->info.apeynom);
          printf("Edad             : %d\n",p->info.edad);

          p=p->sig;
    }
    getch();
    
}
 
void inicializar(nodo *&frente)
{
     frente=NULL;
}

void insertar(nodo *&frente,registro x)
{
     nodo *p;
     
     p=new nodo;
     
     if (p!=NULL)
     {
           p->info=x;
           p->sig=frente;
           frente=p;
     }  
     else
            printf("ERROR - no hay memoria suficiente.......");
}

int borrar(nodo *&frente)
{
     
     if (frente!=NULL)
     {
             int x;
             x=frente->info.legajo;
             frente=frente->sig;
             return x;
     }
     else
     {
             printf("ERROR - PILA VACIA");
             return 0;
     }
}
