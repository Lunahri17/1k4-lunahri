#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void leer(int m1,int n1, floar a1[50][50]);
float total(int m1,int n1, int a1[50][50]);


main()
{
	int n,m;
	float a[50][50],mt;

	printf("\nIngrese la cantidad de filas: ");
	scanf("%d",&m);
	printf("\nIngrese la cantidad de columnas: ");
	scanf("%d",&n);

	//Primer punto:
	leer(m,n,a);

	//Cuarto Punto:
	mt=total(m,n,a);
	
 	printf("\n\n");
	system("pause");
}

void leer(int m1,int n1, floar a1[50][50])
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

float total(int m1,int n1, int a1[50][50])
{
	int i,j;
	float s;

	//incializar - Todos los valores de la matriz
	s=0

	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; i++)
		{
			s+=a1[i][j];
		}	
	}
	return s;
}
