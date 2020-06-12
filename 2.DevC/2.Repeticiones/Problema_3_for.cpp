#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int N,c,numero,inverso,d1,d2;
	//float
	printf("\nIngrese la cantidad de numeros: ");
	scanf("%d",&N);
	
	for(c=0;c<N;c++)
	{
		printf("\nIngrese un numero de dos digitos para obtener su inverso: ");
		scanf("%d",&numero);
		
		d1=numero%10;
		d2=numero/10;
		inverso=d1*10+d2;
		
		printf("\nEl inverso de %d es: %d\n",numero,inverso);
	}


 	printf("\n\n");
	system("pause");
}

