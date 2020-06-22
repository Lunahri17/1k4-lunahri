#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int n=0,a=0,b=0,c=0,d=0,op=0;
	
	printf("\nIngrse un numero de 3 cifras: ");
	scanf("%d",&n);
	
	do
	{
		if(n>999 or n<100)
		{
			printf("\nIngreso un numero equivocado, intente nuevamente.");
		}
		else
		{
			c=n%10;
			b=((n-c)/10)%10;
			a=(n-c-(b*10))/100;
			
//			printf("a= %d\n",a);
//			printf("b= %d\n",b);
//			printf("c= %d\n",c);

			op=(a+c)*b;
			
			printf("La suma de los digitos externos multimplicado por el digito central\n");
			printf("da como resultado: %d",op);
		}
		
		printf("\n\nIngrse un numero de 3 cifras: ");
		scanf("%d",&n);
	}
	while(n!=0);

 	printf("\n\n");
	system("pause");
}

