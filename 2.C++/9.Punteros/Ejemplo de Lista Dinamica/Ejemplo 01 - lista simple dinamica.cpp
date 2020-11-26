/* ENUNCIADO DEL PROBLEMA USANDO LISTA SIMPLE:

   1- Cargar una lista dinamica ingresando de a uno una cantidad
   		de N elementos haciendo uso de la funcion insertarNodo.
   		
   2- Mostar los elementos ingresados a la lista usando la función mostrarNodos
   
   3- Haciendo uso de una funcion determina el mayor nenor y determina el
   		promedio de los valores ingresados usando la funcion calcularMayMenProm.
*/
#include <stdio.h>
#include <stdlib.h>
 
struct nodo{
	int nro;
	struct nodo *sgte;
};

//typedef struct nodo *Tlista;

//Prototipos de las funciones.
void calcularMayMenProm(nodo *finLista);
void insertarNodo(nodo *&finLista, int valor);
void mostrarNodo(nodo *finLista);

/*------------------------- Funcion Principal ---------------------------*/
main()
{
	int x, n, mayor, menor, promedio=0;
	
	nodo *finLista = NULL;	//Crea un puntero de fin de lista de tipo nodo.
	system("color 0a");		//Pone color azul la pantalla
	printf("\n\n\t\t[  EJERCICIOS LISTAS SIMPLES ]\n");
	printf("\t\t-----------------------------\n\n");
	printf(" Calcular mayor,menor y promedio de una lista\n\n");
	
	/*------- Solicita se establezca la cantidad de elementos a ingresar*/
	printf("\n Ingrese tamanio de lista: ");
	scanf("%d", &n);
	
	//------Realiza la carga de la lista //
	for(int i=1;i<=n;i++)
	{
		printf("\n Ingrese un valor entero ");
		scanf("%d", &x);
		insertarNodo(finLista, x);
	}
	
	//Muestra los elementos de la lista.
	system("CLS");
	printf("\n\n");
	mostrarNodo(finLista);

	//Calcula mayor, menor y promedio de los valores ingresados.
	calcularMayMenProm(finLista);
	system("pause");
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
	} else{		
		t = finLista;
		while(t->sgte!=NULL)
		{		
			t = t->sgte;
		}	
		t->sgte = q;
	}
}	

/*----------------------Mostrar Lista--------------------------------------*/
void mostrarNodo(nodo *finLista)
{
	int i = 0;
	printf("Listado de los elementos guardados en la Lista\n");
	printf("==============================================\n\n");
	while(finLista != NULL)
	{	
		printf("%d, %d \n", i+1, finLista->nro);
		finLista = finLista->sgte;
		i++;
	}	
}

/*--------------- Calcula el mayor, menor y promedio de los numeros--------*/ 
void calcularMayMenProm(nodo *finLista)
{
	int mayor=finLista->nro, menor=finLista->nro, n=0;
	float promedio;
	
	while(finLista != NULL)
	{
		n=n+1;
		if(mayor < (finLista->nro))
			mayor = finLista->nro;
		
		if(menor > (finLista->nro))
			menor = finLista->nro;
			
		promedio += finLista->nro;
		
		finLista = finLista->sgte;
		
	}
	promedio = (float)promedio/n;
	
	printf("\n\n\n Valores determinados\n");
	printf("=======================\n\n");
	printf("mayor:    %d \n\n", mayor);
	printf("menor:    %d \n\n", menor);
	printf("promedio: %f \n\n", promedio);
}

