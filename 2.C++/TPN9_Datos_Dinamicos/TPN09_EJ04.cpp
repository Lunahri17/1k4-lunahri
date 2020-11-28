#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct registro
{
    char nom_prog[50];
    int cant_lineas;
};

struct nodo
{
    registro info;
    nodo *sig;
};

//Protipos de funciones:
void end();
void insertar_nodo(nodo *&frente,registro aux);
void borrar_nodo(nodo *&frente);
void mostrar_pila(nodo *&frente);

main()
{
	nodo *frente=NULL;
    int n;
    registro aux;

    printf("\nIngrese la cantidad de programas: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nNombre del programa %d: ",i+1);
        _flushall();
        gets(aux.nom_prog);

        printf("\nCantidad de lineas: ");
        scanf("%d",&aux.cant_lineas);

        insertar_nodo(frente,aux);

        printf("\n---------------------------------------------------------------------");
    }
    
    system("cls");
    borrar_nodo(frente);
    printf("\n\n");
    system("pause");

    mostrar_pila(frente);

	end();
}

void insertar_nodo(nodo *&frente,registro aux)
{
    nodo *p = new nodo;

    if (p != NULL)
    {
        p->info = aux;
        p->sig = frente;
        frente = p;
    }
    else
    {
        printf("\n ERROR - No hay memoria suficiente.");
    }    
}

void borrar_nodo(nodo *&frente)
{
    if (frente != NULL)
    {
        char nombre[50];
        strcpy(nombre,frente->info.nom_prog);
        frente = frente->sig;
        printf("\n Se borro el programa: %s",nombre);
    }
    else
    {
        printf("\n ERROR - La listaa esta vacia.");
    }
}

void mostrar_pila(nodo *&frente)
{
    nodo *aux = frente;

    while (aux != NULL)
    {
        printf("\n");
        printf("Nombre del programa: %s\n",aux->info.nom_prog);
        printf("Cantidad de lineas : %d\n",aux->info.cant_lineas);
        aux = aux->sig;
    }
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}