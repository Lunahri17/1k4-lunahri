#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void multiplos(int valor);
void submultiplos(int valor2);

main()
{
    int c,n,x;

    printf("\nIngrese la cantidad de numeros enteros a ingresar: ");
    scanf("%d",&n);

    for(c=0;c<n;c++)
    {
        printf("\n\nIngrese el numero: ");
        scanf("%d",&x);
        if(x<1)
        {
            printf("\nEl numero que ingreso es menor a cero. Vuelva a ingresar otro numero");
            c--;
        }
        else
        {
            multiplos(x);
            submultiplos(x);
        }
    }
    
 	printf("\n\n");
	system("pause");
}


void multiplos(int valor)
{
    system("cls");

    int mul,n=1;

    printf("\n\tMultiplos de %d:\n",valor);

    while(n<=10)
    {
        mul=n*valor;

        printf("\n%d x %d = %d",n,valor,mul);
        n++;
    }
}

void submultiplos(int valor2)
{
    int submul,n=1;

    printf("\n\n\tDivisores de %d:\n",valor2);

    while(n<=10)
    {
        if (valor2%n==0)
        {
            submul=valor2/n;
            printf("\n%d / %d = %d",valor2,n,submul);
        }
        n++;
    }
}
