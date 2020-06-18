#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int palindromo(int valor);

main()
{
	int c=0,n,x,resultado=0;
	
	printf("\nIngrese la cantidad de elementod: ");
	scanf("%d",&n);
	
	while(c<n)
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&x);

		if (x>9999 and x<100000)
		{
			resultado=palindromo(x);
		
			if(resultado==1)
			{
				printf("\nEl numero es palindromo");
			}
			else
			{
				printf("\nEl numero no es palindromo");
			}

			c++;
		}
		else
		{
			printf("\nEl numero ingresado no es de 5 digitos.");
		}
	}

 	printf("\n\n");
	system("pause");
}

int palindromo(int valor)
{
	int res,pe,ni=0,r;

	pe=valor;
	
	while(pe!=0)
	{
		r=pe%10;
		pe=pe/10;
		ni=ni*10+r;
	}

	if(ni==valor)
	{
		res=1;
	}
	else
	{
		res=0;
	}

	return res;
}

