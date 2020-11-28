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
char borrar_nodo(nodo *&frente);

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
    
    printf("\n Se borro el programa: %s",borrar_nodo(frente));

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

char borrar_nodo(nodo *&frente)
{
    if (frente != NULL)
    {
        char nombre[50];
        strcpy(nombre,frente->info.nom_prog);
        frente = frente->sig;
        return nombre;
    }
    else
    {
        printf("\n ERROR - La listaa esta vacia.");
        return 0;
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