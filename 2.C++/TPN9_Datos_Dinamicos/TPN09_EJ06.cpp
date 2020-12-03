#include<stdio.h>
#include<stdlib.h>

//Estructuras:
struct registro
{
	int num_atencion;
    int num_celular;
	char tipo; //F: Facturacion; C: Compra; T: Tecnico.
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
    bool stop;
	
    printf("\nIngrese la cantidad de usuarios: ");
    scanf("%d",&aux2);
	
	for (int i = 0 ; i < aux2 ; i++)
    {
        printf("\nIngrese el numero de atencion del usuario %d: ",i+1);
        scanf("%d",&reg.num_atencion);
        printf("\nIngrese el numero de celular: ");
        scanf("%d",&reg.num_celular);
		
        do
        {
            stop=false;

            printf("\nIngrese el tipo de reclamo (F: Facturacion; C: Compra; T: Tecnico): ");
            _flushall();
            gets(reg.tipo);
            strupr(reg.tipo);

            if ((reg.tipo == 67) or (reg.tipo == 70) or (reg.tipo == 84))
            {
                stop=true
            }
        } while (stop == false);
        
		insertar_nodo(frente,fondo,reg);
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