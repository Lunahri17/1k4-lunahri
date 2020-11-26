#include<stdio.h>
#include<stdlib.h>

//Estructuras:
struct nodo{
	float nro;
    nodo *sgte;
};

//Protipos de funciones:
void end();
void insertar_lista(nodo *&Lista,float valor);

main()
{
	nodo *Lista = NULL;
    int n;
    float valor;

    printf("\nIngrese el tamnio de la lista: ");
    scanf("%d",&n);

    //Carga la lista:
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese el valor real %d: ",i+1);
        scanf("%f",&valor);
        insertar_lista(Lista,valor);
    }
    
	
	end();
}


void insertar_lista(nodo *&Lista,float valor)
{
	nodo *aux = Lista,*aux2, *nuevo_nodo = new(nodo); //pide un nuevo nodo.
	
    nuevo_nodo->nro = valor;
	
    while ((aux != NULL) and (aux->nro < valor))
    {
        aux2 = aux;
        aux = aux->sgte;
    }
    
    if (Lista == aux)
    {
        Lista = nuevo_nodo;
    }
    else
    {
        aux2->sgte = nuevo_nodo;
    }
    
    nuevo_nodo->sgte = aux;
}


void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}