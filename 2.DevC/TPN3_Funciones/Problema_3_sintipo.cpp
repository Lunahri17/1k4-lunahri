#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CalMayMen(int &May, int &Men);



main()
{
    int n1,n2,AreaCuadrado=0;

    do
    {
        printf("\nIngrese el primer numero: ");
        scanf("%d",&n1);

        printf("\nIngrese el segundo numero: ");
        scanf("%d",&n2);

        if (n1==n2)
        {
            printf("Los numero son iguales, vuelva a ingresarlos.");
        }
    }
    while(n1==n2);

    CalMayMen(n1,n2);
    printf("\n\tNumero 1: %d",n1);
    printf("\n\tNumero 2: %d",n2);

    

 	printf("\n\n");
	system("pause");
}


void CalMayMen(int &May, int &Men)
{
    int var=0;

    if(May<Men)
    {
        var=May;
        May=Men;
        Men=var;
    }
}