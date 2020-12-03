#include<stdio.h>
#include<stdlib.h>

//Estructuras:
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

//Prototipo:
void insertar_nodo(nodo *&frente,nodo *&fondo,registro reg);
int borrar_nodo(nodo *&frente,nodo *&fondo);


main()
{
	nodo *frente = NULL,*fondo = NULL,*aux;
	int aux2,cod;
	registro reg;
	
    printf("\nIngrese el codigo (0: Para terminar): ");
    scanf("%d",&aux2);
	
	while (aux2 != 0)
    {
        reg.cod = aux2;
		printf("Ingrese importe: ");
		scanf("%f",&reg.imp);
		
		insertar_nodo(frente,fondo,reg);

        printf("\nIngrese el codigo (0: Para terminar): ");
        scanf("%d",&aux2);
    }
	
	cod = borrar_nodo(frente,fondo);
    if (cod != 0)
    {
        printf("\n\nSe borro el nodo: %d \n \n",cod);
    }
	
	aux=frente;
	while(aux != NULL)
    {
		printf("Codigo: %d\n",aux->info.cod);
		printf("Importe: %.2f\n",aux->info.imp);
		printf("------------------------------\n");
		aux = aux->sig;
	}

	system("PAUSE");
}

void insertar_nodo(nodo *&frente,nodo *&fondo,registro reg)
{
	nodo *p = new nodo;
				
	if (p !=NULL)
    {
		p->info = reg;
		p->sig = NULL;
		
        if (frente == NULL)
        {			
			frente=p;
        }
		else
        {
			fondo->sig= p;
        }

		fondo= p;
	}
    else
    {
		printf("ERROR - COLA LLENA");
    }
}

int borrar_nodo(nodo *&frente, nodo *&fondo)
{
	int cod =0;

	if (frente!=NULL)
    {
		nodo*p;
		p=frente;
		cod=p->info.cod;
		frente=p->sig;
		delete p;
		
        if(frente==NULL)
		{
            fondo=NULL;
        }	
	}
    else
    {										
		printf("ERROR - COLA VACIA");
		cod=0;
	}
	return cod;
}