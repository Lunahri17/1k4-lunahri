#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool palindromo(int valor);

main()
{
	int c=0,n,x;
	bool resultado=0;
	
    system("cls");

	printf("\nIngrese la cantidad de elementod: ");
	scanf("%d",&n);
	
	while(c<n)
	{
		printf("\n\nIngrese el numero: ");
		scanf("%d",&x);

		if (x>9999 and x<100000)
		{
			resultado=palindromo(x);
		
			if(resultado) //Aqui no hace falta comparar a verdadero, porque seria una redundancia cuando se trabaja con variables boole.
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

bool palindromo(int valor)
{
	bool res=false;
	int pe,ni=0,r;

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

