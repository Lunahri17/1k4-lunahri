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
void mostrar_lista(nodo *Lista);
void borrar_nodo(nodo *&Lista,int valor);

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
    
    printf("\nIngrese el valor que desea eliminar: ");
    scanf("%f",&valor);
    borrar_nodo(Lista,valor);

    mostrar_lista(Lista);
	
	end();
}

void insertar_lista(nodo *&Lista,float valor)
{
	nodo *nuevo_nodo = new(nodo); //pide un nuevo nodo.
	
    nuevo_nodo->nro = valor;
	
    nodo *aux = Lista,*aux2;

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

void borrar_nodo(nodo *&Lista,int valor)
{
    if (Lista!=NULL)
    {
        nodo *aux_borrar=Lista;
        nodo *anterior=NULL;

        while((aux_borrar!=NULL) and (aux_borrar->nro!=valor))
        {	
            anterior=aux_borrar;
            aux_borrar=aux_borrar->sgte;
        }

        if (aux_borrar==NULL)
        {
            printf("\nEl elemento buscado no se encontro.");
        }
        
        if (anterior==NULL)
        {
            Lista=Lista->sgte;
            delete aux_borrar;
        }
        else
        {
            anterior->sgte=aux_borrar->sgte;
            delete aux_borrar;
        }        
    }
}


void mostrar_lista(nodo *Lista)
{
    nodo *actual = new(nodo);
    actual=Lista;

    int i = 0;
	printf("\nListado de los elementos:\n");
	while(actual != NULL)
	{	
		printf("Elemento %d: %.2f \n", i+1, actual->nro);
		actual = actual->sgte;
		i++;
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