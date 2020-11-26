/*CREA UNA COLA CON ESTRUCTURA DINAMICA QUE ALMACENA NUMEROS ENTEROS*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

struct nodo
{
       int info;
       nodo *sig;
};

void inicializar(nodo *&frente,nodo *&fondo);
void insertar(nodo *&frente,nodo *&fondo, int x);
int borrar(nodo *&frente,nodo *&fondo);

main()
{
    nodo *frente,*fondo,*p;
    int i,x;
    
    inicializar(frente,fondo);
    
    for (i=0;i<3;i++)
    {
        printf("Ingrese el valor de x: ");
        scanf("%d",&x);
        insertar(frente,fondo,x);
    }
    
    printf("\n\nSE BORRA EL VALOR: %d\n\n",borrar(frente,fondo));
    
    p=frente;
    while (p!=NULL)
    {
          printf("%d\n",p->info);
          p=p->sig;
    }
    getch();
    
}
 
void inicializar(nodo *&frente,nodo *&fondo)
{
     frente=NULL;
     fondo=NULL;
}

void insertar(nodo *&frente, nodo *&fondo,int x)
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
           printf("ERROR - COLA LLENA");
}

int borrar(nodo *&frente,nodo *&fondo)
{
     
     if (frente!=NULL)
     {
             nodo *p;
             int x;
             
             p=frente;
             x=frente->info;
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
