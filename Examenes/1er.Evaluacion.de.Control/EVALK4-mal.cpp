#include<stdio>
#include<stdlib>

main()
{
	int N,c,x;
	printf("\nIngrese la cantidad de numeros: ");
	scanf("%d",&N);
	while(c<N)
	{
		printf("\nIngrese el nro: ");
		scanf("%d",x);
		if(x>99 or x<1000)
		{
			digi3=x mod 10;
			printf("\nEl ultimo digito es: %d",digi3);
			c++;
		}
		else
		{
			printf("\nEl numero ingresado no es de 3 digitos, ingrese de nuevo\n");
			system("pause");
		}
	}
 	printf("\n\n");
 	system("pause");
}