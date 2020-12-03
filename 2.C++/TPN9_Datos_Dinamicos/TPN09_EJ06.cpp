#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

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
void borrar_nodo(nodo *&frente,nodo *&fondo);


main()
{
	nodo *frente = NULL,*fondo = NULL,*aux;
	int aux2,cod,contador=0;
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
            scanf("%c",&reg.tipo);

            if ((reg.tipo == 99) or (reg.tipo == 102) or (reg.tipo == 116))
            {
                reg.tipo=(reg.tipo)-32;
            }

            if ((reg.tipo == 67) or (reg.tipo == 70) or (reg.tipo == 84))
            {
                stop=true;
            }
            else
            {
                printf("\nIngreso una letra incorrecta, vuelva a intentarlo.");
            }
            
        } while (stop == false);
        
		insertar_nodo(frente,fondo,reg);
    }
	
    

	
	
	aux=frente;
	while(aux != NULL)
    {
        printf("\nProximo cliente a atender: ");
		printf("\nNumero de atencion: %d",aux->info.num_celular);
        printf("\nNumero de celular: %d",aux->info.num_celular);
		printf("\nTipo de reclarmo: ");
        if (aux->info.tipo == 67)
        {
            printf("Compra.");
        }
        
        if (aux->info.tipo == 70)
        {
            printf("Facturación.");
        }
        
        if (aux->info.tipo == 84)
        {
            printf("Tecnico.");
            contador++;
        }

		printf("------------------------------\n");
        
        borrar_nodo(frente,fondo);
        
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

void borrar_nodo(nodo *&frente, nodo *&fondo)
{
	if (frente!=NULL)
    {
		nodo*p;
		p=frente;
		
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
	}
}