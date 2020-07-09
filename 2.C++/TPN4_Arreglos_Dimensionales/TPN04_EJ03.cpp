#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int CargarValores(int vector1[100]);

main()
{
	int n,vector[100],ValorBuscar,Cantidad=0;
	bool esta=0;

	n=CargarValores(vector);
    
	printf("\n Ingrese el valor a buscar: ");
	scanf("%d",&ValorBuscar);
	
	Buscar(n,vector,ValorBuscar,Cantidad);

	printf("\n El valor %d esta en el vector, y se repitio %d.",ValorBuscar,Cantidad);
	

	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}

int CargarValores(int vector1[100])
{
	int n,i=0;

	do
	{
		printf("\n Ingrese el valor %d, o ingrese 0 para terminar: ",i+1);
		scanf("%d",&n);
		
		if (n!=0)
		{
			vector1[i]=n;
			i++;	
		}
	}
	while (n!=0);
	
	return i;
}

bool Buscar(int n1,int vector1[100],int valor,int &cant)
{
	cant=0

	for (int i=0;i<n1;i++)
	{
		if (valor==vector1[i])
		{
			cant++;
		}
	}
	
	if (cant>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}
