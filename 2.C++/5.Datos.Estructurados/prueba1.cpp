//porcentaje de numeros pares, numero mayor, lugar en el que esta.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cargar(int orden,int vector[100000]);
void mostrar(int orden,int ector[100000]);
void porcentaje(int orden,int vector[100000],float &por);
int mayormenor(int orden, int vector[100000],int &posmen);
void pausa();

main()
{
	int N,edad[100000],posmayor,posmenor;
	float porce;
	
	printf("Ingrese la cantidad de elementos: ");
	scanf("%d",&N);
	
	cargar(N,edad);
	mostrar(N,edad);
	
	printf("\n El promedio de las edades: ");
	
	porcentaje(N,edad,porce);
	printf("\n El porcentaje de numeros pares es: %.2f",porce);
	
	posmayor=mayormenor(N,edad,posmenor);
	printf("\n El elemento mayor del vector es: %d",edad[posmayor]);
	printf("\n Y se encuentra en la posicion: %d",posmayor+1);

	printf("\n El elemento menor del vector es: %d",edad[posmenor]);
	printf("\n Y se encuentra en la posicion: %d",posmenor+1);
	
	pausa();
}

void cargar(int orden, int vector[100000])
{
	for(int i=0;i<orden;i++)
	{
		vector[i]=1+rand()%100000;
		//printf("\nIngrese el valor: ");
		//scanf("%d",&edad[i]);
	}
}

void mostrar(int orden, int vector[100000])
{
	printf("\nLos elementos del vector son: ");
	for(int i=0;i<orden;i++)
	{
		printf("\t%d",vector[i]);
	}
}

void porcentaje(int orden,int vector[100000],float &por)
{
	int s=0,cp=0;
	
	for(int i=0;i<orden;i++)
	{
		if(vector[i]%2==0)
		{
			cp++;
		}
	}
	por=(float)cp*100/orden;
}

int mayormenor(int orden, int vector[1000000],int &posmen)
{
	int may=vector[0],men=vector[0],pmay=0;
	
	posmen=0;
	
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
			posmen=i;
		}
	}
	return pmay;
}

void pausa()
{
	printf("\n\n");
	system("pause");
}
