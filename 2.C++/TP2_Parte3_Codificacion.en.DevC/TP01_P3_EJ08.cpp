#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	int n,d,x,a,b,c;
	
	printf("Ingresa la cantidad de numeros a ingresar: ");
	scanf("%d",&n);
	
	for(d=0;d<n;d++)
	{
		printf("\nIngrese un numero de 3 cifras: ");
		scanf("%d",&x);
		
		if(x>999 or x<100)
		{
			printf("\nEl numero que ingreso no es de 3 cifras.\n");
			d--;
		}
		else
		{
			c=x%10;
			b=((x-c)/10)%10;
			a=(x-(b*10)-c)/100;
			
			printf("\nEl digito en el orden de las centenas es: %d",a);
			printf("\nEl digito en el orden de las decenas es: %d",b);
			printf("\nEl digito en el orden de la unidad es: %d\n",c);
		}
	}
	
 	printf("\n\n");
	system("pause");
}
