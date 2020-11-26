/*
Ejercicio 01(cola Dinámica): 
En una empresa se almacena la información sobre los artículos que comercializa, 
en una estructura de cola(FIFO)implementada dinámicamente.Lainformación es: 
	*- Código
	*- Importe de los productos. 
Se pide: 
 	Ingrese 5 nodos en la estructura. 
 	Borre el primer nodo de la cola. 
 	Muestra la información restante de la cola.

DESARROLLO:
*/
#include<stdio.h>
#include<stdlib.h>

/* ------ Define la estructura para guardar los datos ------- */
struct registro{
	int cod;
	float imp;
};

/*------ Define el nodo de la estructura FIFO --------*/
struct nodo{
	registro info;
	nodo *sig;
};

/*------- Define los prototipos ---------*/
void inicializar(nodo *&frente,nodo *&fondo);
void insertar(nodo *&frente,nodo *&fondo, registro x1);
intborrarPrimero(nodo *&frente,nodo *&fondo);


main(){
	nodo *frente, *fondo, *p;	//Define 3 variables puntero a tipo de dato nodo.
	int i, cod;
	registro x;			// Define la variable "x" de tipo registro (estático).
	
	/*-------- Inicializar la cola -------*/
	inicializar(frente,fondo);	//Llamada para inicializar la estructura FIFO
	
	/*-------- Realizar la carga a los 5 nodos de la cola -----------*/
	for(i=0;i<5;i++){
		printf("Ingresecodigo: ");
		scanf("%d",&x.cod);
		printf("Ingrese importe: ");
		scanf("%f",&x.imp);
		
		insertar(frente, fondo, x);	// Llamada, agregar a la cola los datos
	}								// ingresados en un nuevo nodo.
	
	/*---------- Borrado elnodode frente ------*/
	cod = borrarPrimero(frente,fondo)
	printf("\n\nSE BORRO EL PRIMER NODO CON VALOR: %d \n \n",cod);
	
	/*---------- Listado de la lista -----------------------*/
	p=frente;									//Toma frente de la cola.
	while(p != NULL){								//hacer mientras no sea el último nodo.
		printf("Codigo: %d\n",p->info.cod);		//Mostrar los datos de cada nodo
		printf("Importe: %.2f\n\n",p->info.imp);
		printf("------------------------------\n")
		p = p->sig;								//Pasar al siguiente nodo.
	}
	system("PAUSE");
}


/*---------- Función Inicializar------------------*/
void inicializar(nodo *&frente,nodo *&fondo){
	frente= NULL;				//Inicializa el frente de cola en NULL
	fondo= NULL;				//Inicializa el fondo de cola en NULL
}


/*---------- Función Insertar------------------*/
void insertar(nodo *&frente,nodo *&fondo, registro x){
	nodo*p;						//define un puntero a dato tipo nodo
	p = new nodo;				//Solicita espacio de memoria para un Nuevo nodo. (Dinámico)
	if(p !=NULL){				//Si se le asignó el espacio transfiere los datos
		p->info = x;				//En el nuevo nodo se asigna a "p->info" el registro "x".
		p->sig = NULL;			//En el nuevo nodo se asigna a "p->Sig" el valor NULL.
		if(frente == NULL)		//Si frente es null, es el primeroy				
			frente=p;			//Asignaa "frente la dirección del nuevo nodo"p".
		else					//Si no es el primero
			fondo->sig= p;		//Asigna la dirección de p a "fondo->sig".
		fondo= p;				//Asigna a "fondo" la dirección de memoria de p.
	}else
		printf("ERROR - COLA LLENA");	//Cuando no se asigna espacio de memoria, 
}										//muestra el mensaje.


/*---------- Función borrar------------------*/
intborrarPrimero(nodo *&frente, nodo *&fondo){
	int cod =0;
	if(frente!=NULL){
		nodo*p;							//Define un puntero a datos de tipo nodo.
		p=frente;						//Asigna a p la dirección de frente.
		cod=p->info.cod;			//Asigna a "cod" la información del nodo que será eliminado (cod).
		frente=p->sig;				//Asigna a "frente" la dirección del siguiente nodo(frente->sig).
		delete p;						//Libera el espacio de memoria ocupado por "p".
		if(frente==NULL)			//Si "frente" es NULL, en el caso de que la cola tenga un solo nodo.
			fondo=NULL;				//Asigna a "fondo"el valor NULL. Indicando que la cola esta vacía.
	}else{										
		printf("ERROR - COLA VACIA");
		cod=0;
	}
	returncod;
}

