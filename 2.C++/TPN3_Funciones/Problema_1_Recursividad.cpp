#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int producto(int a, int b);

main()
{
    system("cls");

	int n1,n2;
	
    printf("\n\tIngrese dos numeros enteros mayores a 0.\n");
	
	printf("\nIngrese el primer numero: ");
	scanf("%d",&n1);
	
    printf("\nIngrese el segundo numero: ");
	scanf("%d",&n2);

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