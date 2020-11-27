#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct nodo{
	int leg;
    char apenom[50];
    int edad;
    nodo *sgte;
};

//Protipos de funciones:
void end();
void insertar_lista(nodo *&Lista,int legajo,char apeynom[50],int anios);
void mostrar_lista(nodo *Lista);
void borrar_nodo(nodo *&Lista,int legajo);

main()
{
	nodo *Lista = NULL;
    int n,legajo,anios;
    char apeynom[50];

    printf("\nIngrese la cantidad de empleados: ");
    scanf("%d",&n);

    //Carga la lista:
    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese el legajo del empleado %d: ",i+1);
        scanf("%d",&legajo);
        
        printf("\nIngrese el Apellido y Nombre del empleado %d: ",i+1);
        _flushall();
        gets(apeynom);
        
        printf("\nIngrese la edad del empleado %d: ",i+1);
        scanf("%d",&anios);
        insertar_lista(Lista,legajo,apeynom,anios);
    }
    
    system("cls");

    printf("\nIngrese el legajo del empleado que desea eliminar: ");
    scanf("%d",&legajo);
    borrar_nodo(Lista,legajo);
    

    mostrar_lista(Lista);
	
	end();
}

void insertar_lista(nodo *&Lista,int legajo,char apeynom[50],int anios)
{
	nodo *nuevo_nodo = new(nodo); //pide un nuevo nodo.
	
    nuevo_nodo->leg = legajo;
    strcpy(nuevo_nodo->apenom,apeynom);
    nuevo_nodo->edad = anios;
	
    nodo *aux = Lista,*aux2;

    while ((aux != NULL) and (aux->leg < legajo))
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

void borrar_nodo(nodo *&Lista,int legajo)
{
    if (Lista!=NULL)
    {
        nodo *aux_borrar=Lista;
        nodo *anterior=NULL;

        while((aux_borrar!=NULL) and (aux_borrar->leg!=legajo))
        {	
            anterior=aux_borrar;
            aux_borrar=aux_borrar->sgte;
        }

        if (aux_borrar==NULL)
        {
            printf("\nEl empleado buscado no se encontro.");
        }
        
        if (anterior==NULL)
        {
            Lista=Lista->sgte;
            delete aux_borrar;
            printf("\nSe elimino con exito.");
        }
        else
        {
            anterior->sgte=aux_borrar->sgte;
            delete aux_borrar;
            printf("\nSe elimino con exito.");
        }        
    }
}

void mostrar_lista(nodo *Lista)
{
    nodo *actual = new(nodo);
    actual=Lista;

    int i = 0;
	printf("\nListado de los empleados:\n");
	while(actual != NULL)
	{	
        printf("\nEmpleado %d:",i+1);
		printf("\nLegajo: %.2d | Apellido y Nombre: %s | Edad: %d",actual->leg,actual->apenom,actual->edad);
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