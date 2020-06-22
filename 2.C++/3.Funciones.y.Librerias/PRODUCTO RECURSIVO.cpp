/*Desarrolla una función recursiva que permita obtener el producto de dos números (a y b) enteros
positivos mayor a cero. Aplicando el concepto de  “sumar el número a la cantidad de veces que indica
el numero b”.  */
 
#include <stdio.h>
#include <stdlib.h>

void Producto(int a, int b, int &pro);


main()
{
	int a,b,res;
	printf("\nIngrese dos numeros enteros mayores a 0.\n");
	printf("\nIngrese el primer numero: ");
	scanf("%d", &a);
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &b);
	Producto(a,b,res);
	printf("\nProducto: %d",res);
	printf("\n\n");
	system("pause");
}

void Producto(int a, int b, int &pro)
{
	int res2;
	if (b==1)
	{
		pro=a;
	}
	else
	{
		b=b-1;
		pro=(a+Producto(a,b,res2));
	}	
}

