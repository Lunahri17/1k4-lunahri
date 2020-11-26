/*INGRESE UN VECTOR DE NÚMEROS ENTEROS Y PASELOS LUEGO A UNA ESTRUCTURA DINAMICA DE PILA*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct nodo
{
       int info;
       nodo *sig;
};

void inicializar(nodo *&frente);
void insertar(nodo *&frente,int x);
int borrar(nodo *&frente);

main()
{
	nodo *frente,*p;
	int i,x,n,v[10];

	inicializar(frente);

	printf("Ingrese el orden del vector: ");
	scanf("%d",&n);     
	
	/*------ Ingresa los valores a un vector ----------*/
	for (i=0;i<n;i++)
	{
		printf("Ingrese el valor de v[%d]: ",i);
		scanf("%d",&v[i]);
	}	

	/*-------- Pasa los valores del vector a una pila de manera Dinamica -----*/
	for (i=0;i<n;i++)
	{
		insertar(frente,v[i]); 
	}

	/*---- Borra el ultimo elemento ingresado y lo muestra en pantalla ------*/
	printf("\n\nSE BORRA el tope de la pila (ultimo ingresado): %d\n\n", borrar(frente));

	/*-------- Lista los elemento que quedaron en la pila  ------------------*/
	printf("Listados de valores que tiene la pila\n");
	p=frente;
	while (p!=NULL)
	{
		printf("%d\n",p->info);
		p=p->sig;
	}	
	getch();
}

/*------------------------------------------------------------*/
void inicializar(nodo *&frente)
{
	frente=NULL;
}
/*------------------------------------------------------------*/
void insertar(nodo *&frente,int x)
{
	nodo *p;
	p=new nodo;
	if (p!=NULL)
	{
		p->info=x;
		p->sig=frente;
		frente=p;
	}else
		printf("ERROR.....................................");
}
/*-----------------------------------------------------------*/
int borrar(nodo *&frente)
{
	if (frente!=NULL)
	{
		int x;
		x=frente->info;
		frente=frente->sig;
		return x;
	}else
		printf("ERROR..................................");
}
