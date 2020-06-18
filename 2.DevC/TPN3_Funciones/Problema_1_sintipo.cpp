#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void palindromo(int valor, bool &resultado);

main()
{
	int c=0,n,x;
	bool res;
	
    system("cls");

	printf("\nIngrese la cantidad de elementod: ");
	scanf("%d",&n);
	
	while(c<n)
	{
		printf("\n\nIngrese el numero: ");
		scanf("%d",&x);

		if (x>9999 and x<100000)
		{
			palindromo(x,res);
		
			if(res) //Aqui no hace falta comparar a verdadero, porque seria una redundancia cuando se trabaja con variables boole.
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

void palindromo(int valor, bool &resultado)
{
	int pe,ni=0,r;

    resultado=false;
	pe=valor;
	
	while(pe!=0)
	{
		r=pe%10;
		pe=pe/10;
		ni=ni*10+r;
	}

	if(ni==valor)
	{
		resultado=true;
	}
}

