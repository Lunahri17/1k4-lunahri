
/*
	Este ejemplo se crea una pila de manera dinamica cuyo dato seran numeros
	enteros.
*/

/*--------- Bibliotecas Necesarias ---------*/
#include <stdio.h>
#include <stdlib.h>
 
/* estructura de la pila auto-referenciada */
struct nodoPila {   
   int dato;             	/* define un dato como int */
   nodoPila *ptrSiguiente; 	/* apuntador a nodoPila */
}; 							/* fin de la estructura nodoPila */
 
/*----- prototipos -----*/
int agregarNodoPila(nodoPila *&ptrTopeDePila, int info );

int sacarNodoPila(nodoPila *&ptrTopeDePila);
int estaVaciaPila(nodoPila *ptrTopeDePila );
void imprimePila(nodoPila *ptrTopeDePila );
int menuPrincipal();
 
/* la función main comienza la ejecución del programa */
main()
{ 
	nodoPila *ptrTopeDePila;
	ptrTopeDePila = NULL ;				
   int valor, opcion=3;  					//valor a guardar en la pila.

   /* mientras el usuario no introduzca 3 */
   while ( opcion != 0 ) { 
   
		opcion = menuPrincipal();
		switch(opcion) { 
		
			/*----------- Agrega un nuevo valor dentro de la pila --------------*/
			case 1:      
				system("CLS");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t         Ingreso de valores a la Pila        ");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t    Introduzca un entero: " ); 
				scanf( "%d", &valor );
				agregarNodoPila(ptrTopeDePila, valor);
			break;
	
			/*----------- Quita el ultimo valor ingresado de la pila -----------*/
			case 2:      
				// < Verifica si la pila no esta vacia >
				if ( !estaVaciaPila( ptrTopeDePila ) ) {
						system("CLS");
   					printf("\n\t\t\t ==============================================");
   					printf("\n\t\t\t              M  E  N  S  A  J  E              ");
   					printf("\n\t\t\t ==============================================");
						printf( "\n\t\t\t El valor sacado es %d \n", sacarNodoPila(ptrTopeDePila));
      				printf("\n\t\t\t ==============================================\n\n\t\t\t");
      				system("PAUSE");
				}	 /* fin de if */
			break;
			
			/*------------- Lista los valores ingsresado a la lista*/
			case 3:
				imprimePila(ptrTopeDePila);
			break;	
			
			case 0:
				system("CLS");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t    S A L I E N D O   DEL   S I S T E M A    ");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t");
				system("PAUSE");
			break;
							
			default:
				system("CLS");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t   VALOR SELECCIONADO NO ES VALIDO           ");
				printf("\n\n\t\t\t         SELECCIONE NUEVAMENTE               ");
				printf("\n\n\t\t\t --------------------------------------------");
				printf("\n\n\t\t\t");
				system("PAUSE");
			break;
      } /* fin de switch */
   } /* fin de while */
   printf( "Fin del programa" );
} /* fin de main */
 
/*-------despliega el menu de opciones disponibles por el programa------------*/
int menuPrincipal()
{ 
	system("CLS"); int eleccion = 0;
	printf("\n\n\n\t\t\t");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t            M e n u  P r i n c i p a l         ");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t   1 Agregar un valor dentro de la pila        ");
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\t\t\t   2 Sacar un valor del tope de la pila        ");
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\t\t\t   3 Mostrar los valores guardado en la pila   ");
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\t\t\t   0 para terminar el programan                ");
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\t\t\t    Seleccione una opcion --> "); 
	scanf("%d", &eleccion);
	return eleccion;
} /* fin de la función */

/*-------------Inserta un nodo en la cima de la pila--------------------------*/ 
int agregarNodoPila(nodoPila *&ptrTopeDePila, int info )
{ 
	nodoPila *ptrNuevo; // define una variable de tipo puntero 
 	system("PAUSE");
   ptrNuevo = new(nodoPila); 	//Pide un nuevo nodo dinamicamente y su direccion
   									//Se la asigna a la variable puntero definida.
 	
   /*-- inserta el nodo en la cima de la pila --*/
   if ( ptrNuevo != NULL ) {  
      ptrNuevo->dato = info;
      ptrNuevo->ptrSiguiente = ptrTopeDePila;
      ptrTopeDePila = ptrNuevo;
   } else { /* no queda espacio disponible */
   	system("CLS");
   	printf("\n\t\t\t ==============================================");
   	printf("\n\t\t\t              M  E  N  S  A  J  E              ");
   	printf("\n\t\t\t ==============================================");
      printf("\n\t\t\t El valor %d NO se inserto. Memoria insuficiente\n", info );
      printf("\n\t\t\t ==============================================\n\n\t\t\t");
      system("PAUSE");
   } 
} /* fin */
 
/* Elimina un nodo de la cima de la pila */
int sacarNodoPila(nodoPila *&ptrTopeDePila)
{ 
   nodoPila *ptrTemp; 	/* apuntador a un nodo temporal */
   int valorElim = 0;   /* Tomara el valor que tiene el nodo eliminado*/
 
   ptrTemp 			= ptrTopeDePila;
   valorElim 		= ptrTopeDePila->dato;
   ptrTopeDePila 	= ptrTopeDePila->ptrSiguiente;
   free(ptrTemp); //Libera el espacio de memoria ocupado por el nodo ptrTemp
 
   return valorElim;
 
} /* fin */
 
/*----- Imprime la pila -----*/
void imprimePila(nodoPila *ptrActual )
{ 
   /* si la pila esta vacía */
   if ( ptrActual == NULL ){
      system("CLS");
   	printf("\n\t\t\t ==============================================");
   	printf("\n\t\t\t              M  E  N  S  A  J  E              ");
   	printf("\n\t\t\t ==============================================");
      printf("\n\t\t\t    L A  P I L A  E S T A  V A C I A           ");
      printf("\n\t\t\t ==============================================\n\n\t\t\t");
   }else { 
      system("CLS");
   	printf("\n\t\t\t ==============================================");
   	printf("\n\t\t\t              L I S T A D O                    ");
   	printf("\n\t\t\t ==============================================");
   	 
      /* mientras no sea el final de la pila */
      printf("\n\n\t\t\t Tope--> ");
      while ( ptrActual != NULL ) { 
         printf( " %d \n", ptrActual->dato );
         ptrActual = ptrActual->ptrSiguiente;
         printf("\n\n\t\t\t      ");
   	} /* fin de while */
   	printf("\n\n\n\t\t\t");
     	system("PAUSE");
   } 
 
} /* fin */
 
/* Devuelve 1 si la pila está vacía, de lo contrario 0 */
int estaVaciaPila( nodoPila *ptrTopeDePila )
{ 
   return ptrTopeDePila == NULL;
 
} /* fin */
