/*CREA UNA PILA CON ESTRUCTURA DINAMICA Y ALMACENA NUMEROS ENTEROS*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct nodo
{
       int info;
       nodo *sig;
};

void inicializar(nodo *&frente);
void insertar(nodo *&frente, int x);
int borrar(nodo *&frente);

/*---------------------------------------------------------*/
main()
{
    nodo *frente,*p;
    int i,x;
    
    inicializar(frente);
    
    /*INGRESA TRES NODOS*/
    for (i=0;i<3;i++)
    {
        printf("Ingrese el valor de x: ");
        scanf("%d",&x);
        insertar(frente,x);
    }
    
    printf("\n\nSE BORRA EL VALOR: %d\n\n", borrar(frente));
    
    p=frente;
    while (p!=NULL)
    {
          printf("%d\n",p->info);
          p=p->sig;
    }
    getch();
    
}
/*-------------------------------------------------------*/
void inicializar(nodo *&frente)
{
     frente=NULL;
}
/*------------------------------------------------------*/
void insertar(nodo *&frente, int x)
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
           printf("ERROR - PILA LLENA");
}
/*------------------------------------------------------*/
int borrar(nodo *&frente)
{
     
   if (frente!=NULL)
     {
             nodo *p;
             int x;
             
             p=frente;
             x=frente->info;
             frente=frente->sig;
             delete p;
             return x;
     }
     else
     {
             printf("ERROR - PILA VACIA");
             return 0;
     }
}
