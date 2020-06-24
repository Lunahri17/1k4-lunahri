#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int pot_imp(int x1);

main()
{
    system("cls");

    int n,c,x;
    
    printf("Ingrese la cantidad de numeros a ingresar: ");
    scanf("%d",&n);

    for(c=0;c<n;c++)
    {
        printf("\nIngrese el numero: ");
        scanf("%d",&x);
        
        printf("\nLa potencia del nuemro %d es: %d\n",x,pot_imp(x));
    }
    system("pause");
    system("cls");
    printf("Gracias por utilizar el programa.");
    
    printf("\n\n");
	system("pause");
}


int pot_imp(int x1)
{
    int c,pot=0,num=1;

    for(c=0;c<x1;c++)
        {
            pot=pot+num;
            num=num+2;
        }
    return pot;
}