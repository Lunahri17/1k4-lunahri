#include <stdio.h>
#include <string.h>

main()
{
      typedef char cadena[30];
      cadena nombre[30],aux;
      int i,n,b;
     
     printf("Ingrese la cantidad de nombres: ");
     scanf("%d",&n);
     
     for (i=0;i<n;i++)
     {
         printf("Ingrese nombre %d: ",i);
         _flushall();
         gets(nombre[i]);
     }
     printf("\n");
    
	 do
     {
         b=0;
         for (i=0;i<n-1;i++)
         {
             if(strcmp(nombre[i],nombre[i+1])>0)
             {
                  strcpy(aux,nombre[i]);
                  strcpy(nombre[i],nombre[i+1]);
                  strcpy(nombre[i+1],aux);
                  b=1;
             }
         }         
     }
     while (b==1);
     
     for (i=0;i<n;i++)
     {
         printf("Nombre %d: %s\n",i,nombre[i]);
     }

}
