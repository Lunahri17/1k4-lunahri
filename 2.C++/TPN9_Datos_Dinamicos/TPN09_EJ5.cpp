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
int borrarPrimero(nodo *&frente,nodo *&fondo);


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
    
	
	/*---------- Borrado elnodode frente ------
	cod = borrarPrimero(frente,fondo)
	printf("\n\nSE BORRO EL PRIMER NODO CON VALOR: %d \n \n",cod);
	
	/*---------- Listado de la lista -----------------------
	p=frente;									//Toma frente de la cola.
	while(p != NULL){								//hacer mientras no sea el �ltimo nodo.
		printf("Codigo: %d\n",p->info.cod);		//Mostrar los datos de cada nodo
		printf("Importe: %.2f\n\n",p->info.imp);
		printf("------------------------------\n")
		p = p->sig;								//Pasar al siguiente nodo.
	}                              */
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


/*---------- Funci�n borrar------------------*/
intborrarPrimero(nodo *&frente, nodo *&fondo){
	int cod =0;
	if(frente!=NULL){
		nodo*p;							//Define un puntero a datos de tipo nodo.
		p=frente;						//Asigna a p la direcci�n de frente.
		cod=p->info.cod;			//Asigna a "cod" la informaci�n del nodo que ser� eliminado (cod).
		frente=p->sig;				//Asigna a "frente" la direcci�n del siguiente nodo(frente->sig).
		delete p;						//Libera el espacio de memoria ocupado por "p".
		if(frente==NULL)			//Si "frente" es NULL, en el caso de que la cola tenga un solo nodo.
			fondo=NULL;				//Asigna a "fondo"el valor NULL. Indicando que la cola esta vac�a.
	}else{										
		printf("ERROR - COLA VACIA");
		cod=0;
	}
	returncod;
}