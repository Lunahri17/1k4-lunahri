#include<stdio.h>
#include<stdlib.h>

bool palindromo(int valor);

main()
{
	int c=0,N,X;
	bool resultado;

	printf("\nIngrese la cantidad de elementos: ");
	scanf("%d",&N);
	
	while(c<N)
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&X);
		
		if(X>9999 and X<100000)
		{
			resultado=palindromo(X);
			
			if(resultado)
			{
				printf("\nEl nro es PALINDROMO");
			}
			else
			{
				printf("\nEl nro NO ES Palindromo");
			}
		
			c++;
		}
		else
		{
			printf("\nEl nro ingresado NO ES de 5 digitos, ingrese nuevamente");
		}
	}

	printf("\n\n");
	system("pause");
}

bool palindromo(int valor)
{
	int pe,ni=0,r;
	bool res=false;
	
	pe=valor;
	while(pe!=0)
	{
		r=pe%10;
		pe=pe/10;
		ni=ni*10+r;
	}
	
	if(ni==valor)
	{
		res=true;
	}
	return res;
}
