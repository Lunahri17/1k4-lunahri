/*CREA UNA COLA CON ESTRUCTURA DINAMICA QUE ALMACENA INFORMACION SOBRE ARTICULOS*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

struct registro
{
       int cod;
       float imp;
};

struct nodo
{
       registro info;
       nodo *sig;
};

void inicializar(nodo *&frente,nodo *&fondo);
void insertar(nodo *&frente,nodo *&fondo, registro x);
int borrar(nodo *&frente,nodo *&fondo);

main()
{
    nodo *frente,*fondo,*p;
    int i;
    registro x;
    
    inicializar(frente,fondo);
    
    for (i=0;i<3;i++)
    {
        printf("Ingrese codigo: ");
        scanf("%d",&x.cod);
        printf("Ingrese importe: ");
        scanf("%f",&x.imp);       
        insertar(frente,fondo,x);
    }
    
    printf("\n\nSE BORRA EL VALOR: %d\n\n",borrar(frente,fondo));
    
    p=frente;
    while (p!=NULL)
    {
          printf("Codigo: %d\n",p->info.cod);
          printf("Importe: %.2f\n\n",p->info.imp);
          p=p->sig;
    }
    getch();
    
}
 
void inicializar(nodo *&frente,nodo *&fondo)
{
     frente=NULL;
     fondo=NULL;
}

void insertar(nodo *&frente, nodo *&fondo,registro x)
{
     nodo *p;
     
     p=new nodo;
     
     if (p!=NULL)
     {
           p->info=x;
           p->sig=NULL;
           if (frente==NULL)
                 frente=p;
           else
                 fondo->sig=p;
           fondo=p;
     }  
     else
           printf("ERROR - PILA LLENA");
}

int borrar(nodo *&frente,nodo *&fondo)
{
     
     if (frente!=NULL)
     {
             nodo *p;
             int x;
             
             p=frente;
             x=frente->info.cod;
             frente=frente->sig;
             delete p;
             if (frente==NULL)
                 fondo=NULL;
             return x;
     }
     else
     {
         printf("ERROR - PILA VACIA");
         return 0;
     }
}
