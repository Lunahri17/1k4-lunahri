#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct registro
{
    char apeynom[50];
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
void pasiente_mayor_edad(nodo *&frente);

main()
{
	nodo *frente=NULL;
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
    
    system("cls");
    pasiente_mayor_edad(frente);
	
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

void pasiente_mayor_edad(nodo *&frente)
{
    nodo *aux2 = frente;
    registro aux;
    int edad_mayor = 0, telefono_mayor;
    char apeynom_mayor[50];

    while (aux2 != NULL)
    {
        aux = aux2->info;

        if (aux.edad > edad_mayor)
        {
            edad_mayor = aux.edad;
            telefono_mayor = aux.telefono;
            strcpy(apeynom_mayor,aux.apeynom);
        }
        aux2 = aux2->sig;
    }
    
    printf("\n El pasiente con la mayor edad (%d anios) es: %s",edad_mayor,apeynom_mayor);
    printf("\n Telefono del pasiente: %d",telefono_mayor);
}





void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}