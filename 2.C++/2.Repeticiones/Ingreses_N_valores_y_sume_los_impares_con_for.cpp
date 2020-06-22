#include<stdio.h>
#include<stdlib.h>

int n,c;
int suma=0,x; //simpre incializar los contadores
//float suma=0,x;

main()
{
	printf("\nIngrese la cantidad de elementos: ");
	scanf("%d",&n);
	
	/*inicio de la variable (se debe declarar esta variable)*/ /*Condicion de conteo*/ /*Cuanto suma por repetición*/
	for(c=0;c<n;c=c+1) //c++ es igual a c=c+1; c-- es igual a c=c-1
	{
		printf("\nIngrese el numero: ");
		scanf("%d",&x);
		
		//si c mod 2=0; Si el c empieza en 1, el mod debe ser != 0 
		if(c%2==0)
		{
			suma=suma+x;
		}
	}
	
	printf("\nLa suma de los numeros en la posicion impar es: %d\n", suma);
	
 	system("pause");
}
