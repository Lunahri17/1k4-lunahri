#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct registro
{
    char apeynom[60];
    int telefono;
    int edad;
};

struct nodo
{
    registro info;
    nodo *sig;
};

//Protipos de funciones:
void end();
void insertar_nodo(nodo *&frente,registro aux);

//Variables globales:


main()
{
	nodo *frente=NULL,*p;
    int n;
    registro aux;

    printf("\nIngrese la cantidad de pasientes: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nApellido y nombre del pasiente %d: ",i+1);
        _flushall();
        gets(aux.apeynom);

        printf("\nTelefono: ");
        scanf("%d",&aux.telefono);

        printf("Edad: ");
        scanf("%d",&aux.edad);

        insertar_nodo(frente,aux);

        printf("\n---------------------------------------------------------------------");
    }
    
	
	end();
}

void insertar_nodo(nodo *&frente,registro aux)
{
    nodo *p = new nodo;

    if (p != NULL)
    {
        p->info = x;
        p->sig = frente;
        frente = p;
    }
    else
    {
        printf("\n ERROR - No hay memoria suficiente.");
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