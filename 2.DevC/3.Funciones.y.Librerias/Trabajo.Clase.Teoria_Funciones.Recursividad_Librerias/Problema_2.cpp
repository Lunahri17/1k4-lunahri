#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int x);

main()
{
	int c,n,num;
	
	printf("Ingrese N: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&num);
		
		printf("Factorial: %d\n",factorial(num));
		
	}

 	printf("\n\n");
	system("pause");
}

int factorial(int x)
{
	int f;
	
	if(x!=0)
	{
		f=x*factorial(x-1);
	}
	else
	{
		f=1;
	}
	return f;
}

