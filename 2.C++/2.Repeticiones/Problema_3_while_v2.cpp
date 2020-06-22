#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int N,c=0,numero,inverso,d1,d2;
	float division;
	
	//printf("\nIngrese la cantidad de numeros: ");
	//scanf("%d",&N);
	
	//for(c=0;c<N;c++)
	//while(c<N)
	
	printf("\nIngrese un numero de dos digitos para obtener su inverso: ");
	scanf("%d",&numero);
	
	while(numero!=0)
	{
		if(numero<100 and numero>9 or numero>-100 and numero<-9)
		{
			d1=numero%10;
			d2=numero/10;
			inverso=d1*10+d2;
			division=(float)numero/10;
			printf("\nla divicion de %d entre 10: %.2f\n",numero,division);
			printf("\nEl inverso de %d es: %d\n",numero,inverso);
		}
		else
		{
			printf("\nIngreso un numero erroneo.\n");
			//c--;
			printf("\n");
			system("pause");
		}
		c++;
		
		printf("\nIngrese un numero de dos digitos para obtener su inverso: ");
		scanf("%d",&numero);
	}
	printf("\nUsted ingreso %d numeros.",c);
	

 	printf("\n\n");
	system("pause");
}

