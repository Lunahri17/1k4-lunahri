#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	typedef char Cadena[30];
	Cadena Nombre[30],aux;
	int i,n;
	bool Stop;
	 
	printf("Ingrese la cantidad de nombres: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
	    printf("Ingrese nombre %d: ",i);
	    _flushall();
	    gets(Nombre[i]);
	}
	printf("\n");
	
	do
	{
	    Stop=false;
	    for (i=0;i<n-1;i++)
	    {
	        if(strcmp(Nombre[i],Nombre[i+1])>0)
	        {
				strcpy(aux,Nombre[i]);
	            strcpy(Nombre[i],Nombre[i+1]);
	            strcpy(Nombre[i+1],aux);
	            
				Stop=true;
	        }
	    }         
	}
	while (Stop);
	
	system("cls");
	
	for (i=0;i<n;i++)
	{
	    printf("Nombre %d: %s\n",i,Nombre[i]);
	}

}
