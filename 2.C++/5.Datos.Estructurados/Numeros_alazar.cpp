#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime> //Libreria que sirve para poder tener en cuenta la hora del sistema.


main()
{	
	int i,nro,N,nro_azar;
	
	srand(time(0)); //semilla para que el rand no sea siempre los mismos. "time(0)" creo que es el comando que controla la hora xd
	//printf("\t %d",time(0));
	
	printf("\nIngrese la cantidad de numeros a generar: ");
	scanf("%d",&N);
	
	printf("\n\n");
	
	for(i=0;i<N;i++)
	{
		nro_azar=1+rand()%10;
		printf("\t %d",nro_azar);
	}

 	printf("\n\n");
	system("pause");
}

