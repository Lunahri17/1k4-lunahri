#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int n,i,leg[50];
	float pro[50];
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d",&n);
	
	leer(n,pro,leg);
	orden(n,pro,leg);


 	printf("\n\n");
	system("pause");
}

void leer(int n1,float pro1[50],int leg1[50])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\n pro[%d]= ",i);
		scanf("%f",&por1);
		
		printf("\n leg[%d]= ",i);
		scanf("%f",&leg1);
	}
}

void ordenar (int n1,float pro1[50],int leg1[50])
{
	
}





