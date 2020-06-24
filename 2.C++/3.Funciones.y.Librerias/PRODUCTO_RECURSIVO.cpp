#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int producto(int a, int b);

main()
{
	int a,b;
	printf("\nIngrese dos numeros enteros mayores a 0.\n");
	
	printf("\nIngrese el primer numero: ");
	scanf("%d",&a);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&b);

	printf("\nProducto: %d",producto(a,b));
	
	printf("\n\n");
	system("pause");
}

int producto(int a, int b)
{
	if (b==1)
	{
		return a;
	}
	else
	{
		return (a+producto(a,b-1));
	}	
}

