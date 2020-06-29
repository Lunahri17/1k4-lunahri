#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void leer(int n1,float pro1[50],int leg1[50]);
void orden(int n1,float pro1[50],int leg1[50]);
void mostrar(int n1,float pro1[50],int leg1[50]);

main()
{
	int n,i,leg[50];
	float pro[50];
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d",&n);
	
	leer(n,pro,leg);
	orden(n,pro,leg);
	mostrar(n,pro,leg);
	
	printf("\n\tVectores ordenados: ");
	
 	printf("\n\n");
	system("pause");
}

void leer(int n1,float pro1[50],int leg1[50])
{
	int i;
	
	for(i=0;i<n1;i++)
	{
		printf("\n pro[%d]= ",i);
		scanf("%f",&pro1);
		
		printf("\n leg[%d]= ",i);
		scanf("%f",&leg1);
	}
}

void ordenar (int n1,float pro1[50],int leg1[50])
{
	int i,aux,b;
	
	do
	{
		b=0;
		//vector ordenado
		for(i=0;i<n1-1;i++)
		{
			if(pro1[i]>pro1[i])
			{
				aux=pro1[i];
				pro1[i]=pro1[i+1];
				pro1[i+1]=aux;
				
				aux=leg1[i];
				leg1[i]=leg1[i+1];
				leg1[i+1]=aux;
				
				b=1;
				//Vector ordenado
			}
		}
	}
	while(b==1);
}

void mostrar(int n1,float pro1[50],int leg1[50])
{
	int i;
	
	for(i=0;i<n1;i++)
	{
		printf("\n pro[%d]= %.2f",i,pro1[i]);
		printf("\n leg[%d]= %.2f",i,leg1[i]);
	}
}



