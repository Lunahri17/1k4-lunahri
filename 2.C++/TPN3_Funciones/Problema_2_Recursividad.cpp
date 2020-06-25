#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int division(int a, int b);

main()
{
    system("cls");

	int n1,n2;
	
	do
    {
        printf("\nIngrese el dividendo (Debe ser el mayor): ");
	    scanf("%d",&n1);

        if (n1<0)
        {
            printf("\nEl numero ingresado debe ser mayor que cero. Intente Nuevamente.\n");
            system("pause");
        }
    } while (n1<0);
    
	do
    {
        printf("\nIngrese el divisor. Debe ser mayor 0 y menor que el dividendo %d: ",n1);
	    scanf("%d",&n2);
        
        if (n2>n1 or n2==0)
        {
            printf("\nEl numero ingresado debe ser mayor que cero y menor que el dividendo %d. Intente Nuevamente.\n",n1);
            system("pause");
        }
    }while (n2>n1 or n2==0);
    

	printf("\nResultado de la division es: %d",division(n1,n2));
	
	printf("\n\n");
	system("pause");
}

int division(int a, int b)
{
	int div;

    if ((a-b)<0)
    {
        div=0;
    }
    else
    {
        div=1+division(a-b,b);
    }
    return div;
    
}