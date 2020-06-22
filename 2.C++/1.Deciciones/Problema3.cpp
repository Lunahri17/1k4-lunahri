#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int n,a,b,c;
	
	printf("Ingrese un valor de 2 digitos: ");
	scanf("%d",&n);
	
	if(n>99 or n<9)
	{
		printf("\nIngresaste un numero incorrecto.");
	}
	else
	{
		b=n%10;
		a=(n-b)/10;
		c=b*10+a;

		printf("\nEl inverso del valore que ingreso es: %d", c);
	}

 	
	printf("\n\n");
	system("pause");
}

