#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
int carga_arch(FILE *arch,char frase[80]);
void combinar(FILE *arch1,FILE *arch2,FILE *archcomb,int n,int n1,int n2);
void mostrar(FILE *arch,int n);

main()
{
	FILE *arch1,*arch2,*archcomb;
	char frase[80];
	int opcion,n1=0,n2=0;
	
	arch1=fopen("Archivo1.txt","w");
	arch2=fopen("Archivo2.txt","w");

	do
	{
		system("cls");
		printf("\n\tSistema de frases para 2 empleados.");
		printf("\n1. Cargar frases de Jose Luis.");
		printf("\n2. Cargar frases de Maria Emilia.");
		printf("\n3. Terminar el dia.");
		printf("\nIngrese la opcion: ");
		scanf("%d",&opcion);

		switch (opcion)
		{
		case 1:
			n1+=carga_arch(arch1,frase);
			break;

		case 2:
			n2+=carga_arch(arch2,frase);
			break;

		case 3:
			fclose(arch1);
			fclose(arch2);
			if (n1>=n2)
			{
				combinar(arch1,arch2,archcomb,n1,n1,n2);
			}
			else
			{
				combinar(arch1,arch2,archcomb,n2,n1,n2);
			}
			break;
		
		default:
			printf("\nIngreso una opcion incorrecta, vuelva a intentarlo.\n\n");
			system("pause");
			break;
		}
	} while (opcion!=3);
	
	system("cls");
	printf("\nFrases de Jose Luis: \n\n");
	mostrar(arch1,1);
	printf("\n\nFrases de Maria Emilia: \n\n");
	mostrar(arch2,2);
	
	printf("\n\n");
	system("pause");

	printf("\n\nFrases Combinadas: \n\n");
	mostrar(archcomb,3);

	remove("Archivo1.txt");
	remove("Archivo2.txt");

	end();
}

int carga_arch(FILE *arch,char frase[80])
{
	int i=0;
	
	printf("\nIngrese la/s frase/s (Ingrese 'final' para terminar): ");
	_flushall();
	gets(frase);
	
	while (strcmp(frase,"final")!=0)
	{
		fprintf(arch,strcat(frase,"\n"));
		printf("\nIngrese la/s frase/s (Ingrese 'final' para terminar): ");
		_flushall();
		gets(frase);

		i++;
	}
	return i;
}

void combinar(FILE *arch1,FILE *arch2,FILE *archcomb,int n,int n1,int n2)
{
	char frase[80];

	arch1=fopen("Archivo1.txt","r");
	arch2=fopen("Archivo2.txt","r");
	archcomb=fopen("Frases.txt","a+");

	for (int i = 0; i < n; i++)
	{	
		if (n1!=0)
		{
			fgets(frase,80,arch1);
			fprintf(archcomb,frase);
			n1--;
		}
		
		if (n2!=0)
		{
			fgets(frase,80,arch2);
			fprintf(archcomb,frase);
			n2--;
		}
	}
	
	fclose(arch1);
	fclose(arch2);
	fclose(archcomb);
}

void mostrar(FILE *arch,int n)
{
	char frase[80],c;
	bool b;
	
	switch (n)
	{
		case 1:
			arch=fopen("Archivo1.txt","r");
			fgets(frase,80,arch); 
			while (!feof(arch))
			{
				strlwr(frase);
				printf("%s",frase);
				fgets(frase,80,arch);
			}
			fclose(arch);
			break;
		
		case 2:
			arch=fopen("Archivo2.txt","r");
			fgets(frase,80,arch); 
			while (!feof(arch))
			{
				strupr(frase);
				printf("%s",frase);
				fgets(frase,80,arch);
			}
			fclose(arch);
			break;

		default:
			arch=fopen("Frases.txt","r");
			
			c=getc(arch);
			c-=32;
			while (!feof(arch))
			{
				if (c==32 or c=='\n')
				{
					b=true;
				}
				else
				{
					b=false;
				}	
				
				printf("%c",c);
				c=getc(arch);
				
				if (b)
				{
					c-=32;
				}	
			}
			fclose(arch);
			break;
	}
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}