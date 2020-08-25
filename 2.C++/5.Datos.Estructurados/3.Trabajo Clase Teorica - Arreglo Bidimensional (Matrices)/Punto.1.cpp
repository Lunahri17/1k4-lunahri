#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void leer(int m1,int n1,float a1[50][50]);
float total(int m1,int n1,float a1[50][50]);


main()
{
	int n,m,suc;
	float a[50][50],mt,mayf;

	printf("\nIngrese la cantidad de filas: ");
	scanf("%d",&m);
	printf("\nIngrese la cantidad de columnas: ");
	scanf("%d",&n);

	//Primer punto:
	leer(m,n,a);

	//Segundo punto:
	mayf=0;
	suc=0;
	
	for (int i = 0; i < m; i++) //aqui si importa que primero vaya el cilco de i, porque tenemos que saber por sucursal
	{
		//inicializar por filas:
		s=0;

		for (int j = 0; j < n; i++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%f",&a[i][j]);
		}
		
		if (s>mayf)
		{
			mayf=s;
			suc=i;
		}	
	}

	printf("\nLa sucursal con mayor valor de ventas fue la %d.",suc);

	//Cuarto Punto:
	mt=total(m,n,a);
	printf("\nMonto total de todas las sucursales: %.2f",mt);
	
 	printf("\n\n");
	system("pause");
}

void leer(int m1,int n1,float a1[50][50])
{
	int i,j;

	//primero ciclo de i --> por filas
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; i++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%f",&a1[i][j]);
		}	
	}
}

float total(int m1,int n1,float a1[50][50])
{
	int i,j;
	float s;

	//incializar - Todos los valores de la matriz
	s=0;

	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; i++)
		{
			s+=a1[i][j];
		}	
	}
	return s;
}
