#include <stdio.h>
#include <stdlib.h>

//Estructura de la pila.
struct pila
{​​​​
    int info; //Campo información
    pila *dir_Ant; //Campo de la direccion anterior
}​​​​;

pila *pilaO, *pilaAux;

void insertar();
void mostrar();
void eliminar();
void buscar();

main()
{​​​​
    int opcion;
    pilaO=NULL;
    
    while(true)
    {​​​​
        printf("\n 1 Ingreso de datos a la pila");
        printf("\n 2 Leer datos de la pila");
        printf("\n 3 Eliminar datos de la pila");
        printf("\n 4 Buscar datos en la pila");
        printf("\n 5 Salir\n\n");
        printf("Opcion: ");
        scanf("%d",&opcion);
        switch(opcion)
        {​​​​
            case 1: {​​​​ insertar(); break;}​​​​
            case 2: {​​​​ mostrar(); break;}​​​​
            case 3: {​​​​ eliminar(); break;}​​​​
            case 4: {​​​​ buscar(); break;}​​​​
            case 5: {​​​​ exit(1); break;}​​​​
        }​​​​
    }​​​​
}​​​​

void insertar()
{​​​​
    if (pilaO==NULL)
    {​​​​ //Verifica Si se asigno el espacio de memoria, tendrá una direccion
        printf("\nDireccion de la Pila antes de asignar un espacio: %x",pilaO);
        pilaO=new(pila); //Crea un nuevo espacio de memoria para la estructura pila
        
        printf("\nDireccion de la Pila despues de asignarle un espacio: %x",pilaO);

        printf("\nIngrese el PRIMER dato de la pila: \n\n");
        scanf("%d",&pilaO->info);
        
        printf("\nDato Ingresado correctamente\n");

        pilaO->dir_Ant=NULL;
        
        printf("\nDireccion Anterior: %x",pilaO->dir_Ant);
        return;
    }​​​​
    else //Si el nuevo nodo solicitado no recibe memoria muestra un mensaje.
    {​​​​
        pilaAux=new(pila); //Crea un nuevo espacio de memoria para la estructura pila
        printf("\nDireccion de la Pila despues de asignarle otro espacio: %x",pilaAux);

        printf("\nIngrese el dato a la pila: \n\n");
        scanf("%d",&pilaAux->info);

        printf("\nDato Ingresado correctamente\n");

        pilaAux->dir_Ant=pilaO;

        printf("\nDireccion Anterior: %x",pilaAux->dir_Ant);

        pilaO=pilaAux;
    }​​​​
}​​​​

void mostrar()
{​​​​
    if(pilaO==NULL)
    {​​​​
        printf("\nNo hay datos en la pila");
    }​​​​
    
    pilaAux=pilaO;
    printf("\nDireccion de PilaAux: %x",pilaAux);
    printf("\nLos datos de la pila son: ");

    while(pilaAux!=NULL)
    {​​​​
        printf("\n%d", pilaAux->info);

        pilaAux=pilaAux->dir_Ant;

        printf("\nDireccion de PilaAux: %x",pilaAux);
    }​​​​

    printf("\nF I N");
}​​​​


void eliminar()
{​​​​
    if(pilaO==NULL)
    {​​​​
        printf("\nNo hay datos en la PILA");

        printf("\n\n");

        system("pause");

        return;
    }​​​​
    
    pilaAux=new(pila);

    pilaAux=pilaO;

    printf("\nElemento eliminado: %d",pilaAux->info);

    pilaO=pilaAux->dir_Ant;

    printf("\nDireccion liberada: %x\n",pilaAux);

    delete(pilaAux);
}​​​​

void buscar()
{​​​​
    if(pilaO==NULL)
    {​​​​
        printf("\nLa pila esta vacia");
        return;
    }​​​​

    int buscardatos;
    bool encontrado=false;
    pilaAux=pilaO;

    printf("\nIngrese el dato a buscar: ");

    scanf("%d",&buscardatos);

    while(pilaAux!=NULL)
    {​​​​
        if(buscardatos==pilaAux->info)
        {​​​​

        printf("\nEncontrado, el valor es: %d",pilaAux->info);

        printf("\nDireccion del dato: %x",pilaAux);

        encontrado=true;

        break;
        }​​​​

        pilaAux=pilaAux->dir_Ant;
    }​​​​

    if(encontrado==false)
    {​​​​
        printf("\nNo se encontro el valor");
    }​​​​
}​​​​