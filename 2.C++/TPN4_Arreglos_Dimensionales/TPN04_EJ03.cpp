#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int CargarValores(int vector1[100]);

main()
{
	int n,vector[100];

	n=CargarValores(vector);
    
	
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
