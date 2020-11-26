#include<stdio.h>
#include<stdlib.h>

//Estructuras:
struct nodo{
	int nro;
	struct nodo *sgte;
};

//Protipos de funciones:
void end();
void insertarNodo(nodo *&finLista, int valor);

main()
{
	nodo *finLista = NULL;
    int n;
    float valor;

    printf("\nIngrese el tamnio de la lista: ");
    scanf("%d",&n);

    //Carga la lista:
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese el valor real %d: ",i+1);
        scanf("%f",&valor);
        insertarNodo(finLista, valor);
    }
    
	
	end();
}

/*-------------------- Insertar siguiente Elemento-------------------------*/
void insertarNodo(nodo *&finLista, int valor)
{
	nodo *t, *q = new(nodo); //pide un nuevo nodo.
	
    q->nro  = valor;
	q->sgte = NULL;
	
    if(finLista==NULL)
	{
		finLista = q;
	} 
    else
    {		
		t = finLista;
		while(t->sgte!=NULL)
		{		
			t = t->sgte;
		}	
		t->sgte = q;
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