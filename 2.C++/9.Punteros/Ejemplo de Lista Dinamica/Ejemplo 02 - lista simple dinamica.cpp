/* Ejemplo de lista Simple dinamica
	Este ejercicio Trabaja con dato de tipo cadena. Veremos Insercion de nombre, 
	listados de nombres eliminacion de nombre(nodoLista), borrar nodo de inicio, final 
	e intermedio de la lista.
*/

// Librerias utilizadas por el programa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	//necesaria manejo de cadenas

// Estructura para almacenar nodos de la lista será una lista de nombres por lo 
// tanto cada elemento de la lista estará compuesto por una cadena que contendrá 
// el nombre a almacenar y un puntero que servirá para apuntar (señalar) al sigui-
// ente nodo de la lista, a este tipo de lista se les denomina de enlace simple.

struct NodoLista {
  char Nombre[50];
  struct NodoLista *Siguiente;
} ;

// Predefinición (Protodipo) de funciones
int InsertarElemento(NodoLista *&);
void ListarElementos(NodoLista *);
int BorrarElementoListaFinal(NodoLista *&);
int BorrarElementoListaPrincipio(NodoLista *&);
int BorrarElementoIntermedio(NodoLista *&);
int menuPrincipal();

// Función principal
main()
{
	// Crear el puntero Raíz de la lista e inicializa a nulo como valor inicial
	NodoLista *inicioDeLista = NULL;
	
	// Crear variable para solicitar las opciones del menú
	int opcion1  = 0;
	int opcion2 = 0;
	
	// Visualizar el menu de opciones
	do {
		opcion1 = menuPrincipal();
		switch(opcion1) {
			case 1:
				//Insertar elemento a la lista; el puntero de inicio ha de ser recibido 
				//por referencia ya que necesita ser afectado (modificado) cuando es el
				//primer elemento en la lista.
				InsertarElemento(inicioDeLista);
				break;
			case 2:
				// Listar elementos de la lista
				ListarElementos(inicioDeLista);
				break;
			case 3:
				//submenu para seleccionar que nodo se desea borrar de la lista
				system("CLS");
				printf("\n\n\t\t\t ======================================");
				printf("\n\n\t\t\t     M e n u   D e    B o r r a d o    ");
				printf("\n\n\t\t\t ======================================");
				printf("\n\n\n\t\t\t (1) Borrar al final.                ");
				printf("\n\n\n\t\t\t (2) Borrar al principio.            ");
				printf("\n\n\n\t\t\t (3) Borrar Intermedio.              ");
				printf("\n\n\n\t\t\t (0) Salir                           ");
				printf("\n\n\n\t\t\t  Seleccione Opcion... ");
				scanf(" %d",&opcion2);
				switch(opcion2) 
				{
					case 1:
						BorrarElementoListaFinal(inicioDeLista);
						break;
					case 2:
						BorrarElementoListaPrincipio(inicioDeLista);
						break;
					case 3:
						BorrarElementoIntermedio(inicioDeLista);
						break;
				}
		}
	} while(opcion1 != 0);
	system("PAUSE");
	return 0;
}

// Menu principal que muestra las actividades que puede hacer el programa.
int menuPrincipal()
{
	int opcion;
	system("CLS");
	printf("");
	printf("\n\t\t=======================================\n");
	printf("\n\t\t     M E N U   D E   O P C I O N E S   \n");
	printf("\n\t\t=======================================\n");
	printf("\n\t\t 1.- Insertar elemento en la lista.    \n");
	printf("\n\t\t 2.- Listar elementos de la lista.     \n");
	printf("\n\t\t 3.- Borrar elemento de la lista.      \n");
	printf("\n\t\t 0.- Salir del programa.               \n");
	printf("\n\t\t ======================================\n");
	printf("\n\t\t    Ingrese su Opcion ...: "); scanf(" %d",&opcion);
	return opcion;
}

// Función para insertar un elemento a una lista. Puede ser colocado segun 
// cuantos elementos tenga la lista.
//		1- si a lista esta vacia debemos modificar el inicioDeLista 
//			indicando que la lista tiene un elemento. Esta situacion hace que se
//			envie inicioDeLista por referencia ya que debe ser modificado.
//		2- Si la lista tiene elemntos se debera agregar al final de la lista el
//			nuevo nodo.
int InsertarElemento(NodoLista *&inicioDeLista)
{
	system("CLS");
	
	//se declara e inicializa varias variables puntero para trabajar con la lista
	NodoLista *Elemento	= NULL;
	NodoLista *Recorrer	= NULL;
	NodoLista *Ultimo		= NULL;
	
	// Recorremos la lista hasta llegar al final de la misma, en el puntero ultimo
	// se quedara almacenado la dirección de memoria del ultimo elemento de la lista, 
	// si no existe ningún elemento en la lista se queda con valor nulo asignado.
	// para no cambiar el valor de inicioDeLista, se usa el puntero recorrer
	Recorrer = inicioDeLista;
	while(Recorrer != NULL) 
	{
		Ultimo = Recorrer;
		Recorrer = Recorrer->Siguiente; //hace que se cambie al siguiente nodo.
	}
	// Creamos el nuevo nodo o elemento que se quiere insertar
	Elemento = new(NodoLista);
	
	// si ha existido un problema y no se crea el nuevo nodo, termina el ingreso.
	if(Elemento == NULL ) 
		return -1; //el valor -1 indica error. no se trata el tema de errores.
	
	// Si se llega a este punto el nodo ha sido creado y solicitamos el nombre 
	// que se ha de almacenar en el mismo.
	printf("\n\n\t  ==============================================");
	printf("\n \t    Teclear Nombre : ");
	scanf(" %s",Elemento->Nombre); //el nombre se guarda directamente en el nodo
	//no se uso gets() porque supondremo que es un nombre de pila
	printf("\n\n\t  ==============================================");

	// asignamos el valor nulo al puntero siguiente del nodo en la lista ya que 
	// este elemento será el ultimo de la misma y por tanto no hay mas elementos 
	// posteriores.
	Elemento->Siguiente = NULL;

	// Modificamos el puntero siguiente del ultimo nodo de la lista para que 
	// apunte al elemento nuevo creado preguntando primero si el valor de ultimo
	// es null, ya que si es así significa que el elemento nuevo creado es el 
	// primero y por tanto hay que modificar el puntero de inicio
	if (Ultimo == NULL ) 
	{
		// Es el primero de la lista
		inicioDeLista = Elemento;
	} else 
	{
		// Es el ultimo de la lista
		Ultimo->Siguiente = Elemento;
	}
	// Salir de la función sin errores
	printf("\n\n\n\t La informacion se guardo en la lista.........\n\n\t");
	system("PAUSE");
	return 0;
}

// Función para listar elementos de la lista Se recibe como valor el contenido 
// del puntero que indica el primer elemento de la lista.
 void ListarElementos(NodoLista *inicioDeLista)
{
	system("CLS");
	// Se crea una variable para recorrer la lista asignándole como primer valor 
	// el elemento al cual apunta el puntero de inicio 
	NodoLista *Recorrer = inicioDeLista; 
	
	// Se visualiza un mensaje
	printf("\n\n\n\t\t========================================");
	printf("\n\n\n\t\t  Listado de elementos de la lista      ");
	printf("\n\n\n\t\t========================================");
	
	// Si hay elementos en la lista se recorre intercambiando el valor del 
	// puntero siguiente asignándolo al puntero recorrer que indica que
	// existe o no un elemento según su valor
	while(Recorrer != NULL)
	{
			// Se visualiza el elemento
		printf("\n\n\t\t %s", Recorrer->Nombre);
			// Se cambia al elemento siguiente
		Recorrer=Recorrer->Siguiente;
	}
	printf("\n\n\t\t ===================================\n");
	printf("\n\n\t\t    F i n   D e l   L i s t a d o     ");
	printf("\n\n\t\t ===================================\n");
	system("PAUSE");
}

// Función Borrar elemento de la lista al principio
int BorrarElementoListaPrincipio(NodoLista *&inicioDeLista)
{
    // Variable para almacenar el elemento a borrar
    NodoLista *Borrar = NULL;
    
    // Se comprueba si el puntero de inicio apunta a algún elemento si es así 
	 // es que existen elementos y se puede borrar el primero en caso contrario
    // no existe ningún elemento y no se puede borrar nada
    if (inicioDeLista == NULL) {
		printf("\n\n\t\t ===================================\n");
		printf("\n\n\t\t    N O   hay elemento en la Lista    ");
		printf("\n\n\t\t ===================================\n");
		system("PAUSE");
      return -1;
    } else 
	 {
		printf("\n\n\t\t ===================================\n");
		printf("\n\n\t\t    Se borro el Primer Elemento, corresponde al nombre %s", inicioDeLista->Nombre);
		printf("\n\n\t\t ===================================\n");
		system("PAUSE");
      
		Borrar = inicioDeLista; //libera de la memoria el nodo borrado.
      inicioDeLista = inicioDeLista->Siguiente;
      free (Borrar);
    }
    return 0;
}

// Función Borrar elemento de la lista al final
int BorrarElementoListaFinal(NodoLista *&inicioDeLista)
{
    NodoLista *Borrar = NULL;;
    NodoLista *Recorrer = NULL;
    Recorrer = inicioDeLista;
    
    if(Recorrer==NULL) {
     printf("\nNo existen elementos que borrar\n");
     return -1;
    }
   
	 // Mientras no se llegue al ultimo elemento
    while(Recorrer->Siguiente!=NULL) {
      Borrar = Recorrer;
      Recorrer= Recorrer->Siguiente;
    }
	// Si borrar es null es que solo existe un elemento
   // y por tanto el valor de inicio ha de cambiar si no
   // es así existen mas elementos y se ha borrar el ultimo
   if(Borrar==NULL) {
       Borrar = inicioDeLista;
      inicioDeLista = NULL;
      free (Borrar);
   } else {
     free(Borrar->Siguiente);
     Borrar->Siguiente=NULL;
   }
 	printf("\n\n\t\t ===================================\n");
	printf("\n\n\t\t    Se borro el Ultimo Elemento, corresponde al nombre %s", inicioDeLista->Nombre);
	printf("\n\n\t\t ===================================\n");
	system("PAUSE");
   return 0;
}

// Función Borrar elemento de la lista al principio
int BorrarElementoIntermedio(NodoLista *&inicioDeLista)
{
   system("cls");
	 // Variables para usar la lista
    NodoLista *Recorrer=NULL;
    NodoLista *Borrar=NULL;
    NodoLista *Anterior=NULL;
    
    // Variable para solicitar el elemento a borrar
    char NombreBuscar[30];
    int encontrado=0;
    
    // Solicitar el nombre a eliminar
    printf("\nNombre a eliminar: ");
    scanf(" %s",NombreBuscar);
    
	 // Se comprueba si el puntero de inicio apunta a
    // algún elemento si es así es que existen elementos
    // y se puede borrar el primero en caso contrario
    // no existe ningún elemento y no se puede borrar nada
    if (inicioDeLista == NULL) {
      printf("\n\n\t\t ===================================\n");
		printf("\n\n\t\t    N O   hay elemento en la Lista    ");
		printf("\n\n\t\t ===================================\n");
		system("PAUSE");
		return -1;
    } else {
        // Recorrer la lista buscando el elemento
        printf("\nBuscando: %s ",NombreBuscar);
        Recorrer = inicioDeLista;
        Anterior = inicioDeLista;
        
        while(Recorrer != NULL && encontrado == 0)
        {
            // Se visualiza el elemento
            printf(".");
            if(strcmp(Recorrer->Nombre,NombreBuscar)==0) {
               printf("\n\n\t\t ===================================\n");
					printf("\n\n\t\t    Se borro el nombre buscado        ");
					printf("\n\n\t\t ===================================\n");
					system("PAUSE");
               encontrado=1;
               Borrar = Recorrer;
               if(Recorrer == inicioDeLista) {
                  inicioDeLista = Recorrer->Siguiente;
               } else {
                  Anterior->Siguiente = Borrar->Siguiente;
               }
               free(Borrar);
            } else {
                // Se cambia al elemento siguiente
                Anterior = Recorrer;
                Recorrer = Recorrer->Siguiente;
            }
        }
    }
    return 0;
}
