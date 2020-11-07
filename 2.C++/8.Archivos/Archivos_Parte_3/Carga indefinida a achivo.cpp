#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	typedef char cadena[30];
	
	cadena nombres[40],palabra;
	int i,N,comp;
	
	FILE *fp;
	fp=fopen("ejemplok4.txt","w");
	
	printf("\nIngrese la palabra: ");
	gets(palabra);
	comp=strcmp(palabra,"final");
	i=0;
	while(comp!=0)
	{
		strcpy(nombres[i],palabra);
		fprintf(fp,strcat(palabra,"\n")); // se graba en un archivo de texto
		i++;
		printf("\nIngrese la palabra: ");
		gets(palabra);
		comp=strcmp(palabra,"final");
	}
	N=i;
	printf("\nSe han cargado %d palabras al vector\n\n",N);
	for(i=0;i<N;i++)
	{
		printf("\nListado del vector: ");
		puts(nombres[i]);
	}
	printf("\n\n");
	system("pause");
}

