#include<stdio.h>
#include<stdlib.h>
#include <ctime>

void cargar(int orden,int vector[50]);
void mostrar(int orden,int vector[50]);
void pausa();
float promedio(int orden,int vector[50]);
int mayormenor(int orden,int vector[50],int &pmen);
void porcentaje(int orden,int vector[50],float &por);
int cargainde(int vector[50]);

main()
{
	srand(time(0));
	int edad[50],N,posmay,posmen;
	float prom,porce;
	N=cargainde(edad);
	//printf("\nIngrese la cantidad de elementos: ");
	//scanf("%d",&N);
	//cargar(N,edad);
	mostrar(N,edad);
	prom=promedio(N,edad);
	printf("\nEl promedio de las edades es: %.2f",prom);
	porcentaje(N,edad,porce);
	printf("\nEl porcentaje de nros pares es: %.2f",porce);
	posmay=mayormenor(N,edad,posmen);
	printf("\nEl elemento mayor del vector es: %d",edad[posmay]);
	printf("\nY se encuentra en la posicion: %d",posmay+1);
	
	printf("\nEl elemento menor del vector es: %d",edad[posmen]);
	printf("\nY se encuentra en la posicion: %d",posmen+1);
	pausa();
	
}

int cargainde(int vector[50])
{
	int i=0,x;
	printf("\nIngrese el valor [para terminar 0]: ");
	scanf("%d",&x);
	while(x!=0)
	{
		vector[i]=x;
		i++;
		printf("\nIngrese el valor: [para terminar 0]");
		scanf("%d",&x);
	}
	return i;
}

int mayormenor(int orden,int vector[50],int &pmen)
{
	int may=vector[0],men=vector[0],pmay=0;
	pmen=0;

	for(int i=1;i<orden;i++)
	{
		if(vector[i]>may)
		{
			may=vector[i];
			pmay=i;
		}
		if(vector[i]<men)
		{
			men=vector[i];
			pmen=i;
		}					
	}

	return pmay;
}

void porcentaje(int orden,int vector[50],float &por)
{
	int cp=0;

	for(int i=0;i<orden;i++)
	{
		if(vector[i]%2==0)
		{
			cp++;
		}					
	}
	por=(float)cp*100/orden;

}

float promedio(int orden,int vector[50])
{
	int s=0;
	float p;
	for(int i=0;i<orden;i++)
	{
		s=s+vector[i];					
	}
	p=(float)s/orden;
	return p;
}


void cargar(int orden,int vector[50])
{
	for(int i=0;i<orden;i++)
		{
			vector[i]=1+rand()%100;
			//printf("\nIngrese el valor: ");
			//scanf("%d",&edad[i]);
		}
}

void mostrar(int orden,int vector[50])
{
	printf("\nLos elementos del vector son: ");
	for(int i=0;i<orden;i++)
	{
		printf("\t%d",vector[i]);					
	}
}

void pausa()
{
	printf("\n\n");
	system("pause");
}
