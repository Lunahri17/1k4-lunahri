#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void suma(int a1, int b1,int &s1);

main()
{
	int a,b,s=0;
	
	printf("Ingrese A: ");
	scanf("%d",&a);
	
	printf("Ingrese B: ");
	scanf("%d",&b);
	
	suma(a,b,s); //Sin tipo - Es una instruccion en C
	
	printf("Suma: %d",s);	

 	printf("\n\n");
	system("pause");
}

//Funcion sin tipo comienza con void
//parametros por valor -> parametros de entrada
//Si quiero que un valor salgo debo poner un & delante de la variable
//parametros por referencia -> & entrada/salida
void suma(int a1, int b1,int &s1)
{
	s1=a1+b1;
}
