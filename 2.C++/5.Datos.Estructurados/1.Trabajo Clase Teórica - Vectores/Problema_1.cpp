#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int legajo(int n1,int v1[100]);
void leer(int n1,int v[100]);

main()
{
	int n,v[100],l;
	
	printf("Ingrese N: ");
	scanf("%d",&n);
		
	leer(n,v);
	
	l=legajo(n,v);
	
	printf("El legajo con mayor promedio es: %d", l);
	
 	printf("\n\n");
	system("pause");
}

//todos lo arreglos son por referencia, y no hace falta poner el "&".
void leer(int n1,int v1[100]) //el 100 debe conicidir con el de la variable declarada en main.
{
	int i;
	
	for(i=0;i<n1;i++)
	{
		printf("v[%d]= ",i);
		scanf("%d",&v1[i]);
	}
}

int legajo(int n1,int v1[100])
{
	int i,leg=0,may=0;
	
	//la variable mayor debe inciar con el menor valor posible.
	
	for(i=0;i<n1;i++)
	{
		if(v1[i]>may)
		{
			may=v1[i];
			leg=i;
		}
	}
	return leg;
}




