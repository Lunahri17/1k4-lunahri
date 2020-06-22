/*Desarrolla una función recursiva que permita dividir en forma entera un numero positivo a,
mayor a cero por otro número positivo b, menor que a, aplicando el principio de “determinar
cuántas veces cabe b en a aplicando restas sucesivas”. */



#include <stdio.h>
#include <stdlib.h>

int division(int a, int b);

main()
{
	int numa,numb,resultado;
	
	do
	{
		printf("\nIngrese un valor para A mayor a 0(dividendo): ");
		scanf("%d",&numa);
		if(numa<0)
		{
			printf("\nEl numero tiene que ser mayor que 0. Ingrese nuevamente\n");
			system("pause");
		}
	}while(numa<0);
	do
	{
		printf("\nIngrese un valor para B (divisor) menor que %d y distinto de cero: ",numa);
		scanf("%d",&numb);
		if(numb>numa or numb==0)
		{
		printf("\nEl numero tiene que ser menor que %d y distinto de cero. Ingrese nuevamente\n",numa);
		system("pause");
		}
	}while(numb>numa or numb==0);
	resultado=division(numa,numb);
	printf("Resultado de la division de a con b= %d",resultado);
	
}

int division(int a, int b)
{
	int divisor;
	if ((a-b)<0)
	{
		divisor=0;
	}
	else
	{
		divisor=1 + division(a-b,b);
	}
	return divisor;
}
