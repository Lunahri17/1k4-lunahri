#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void CalMayMen(int &May, int &Men);
void AreaCuad(int May, int &SupCua);
void AreaCilin(int Men, int &SupCil);

main()
{
    int n1,n2,AreaCuadrado=0,AreaCirculo=0;

    do
    {
        system("cls");

        printf("\n Ingrese el primer numero: ");
        scanf("%d",&n1);

        printf("\n Ingrese el segundo numero: ");
        scanf("%d",&n2);

        if (n1==n2)
        {
            printf("\n Los numeros no pueden ser iguales, vuelva a ingresarlos.");
        }
    }
    while(n1==n2);

    CalMayMen(n1,n2);
    AreaCuad(n1,AreaCuadrado);
    
    printf("\n La superficie del Cuadrado es: %d",AreaCuadrado);

    AreaCilin(n2,AreaCirculo);

    printf("\n La superficie del Circulo es: %d",AreaCirculo);

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

void AreaCuad(int May, int &SupCua)
{
    SupCua=May*May;
}

void AreaCilin(int Men, int &SupCil)
{
    SupCil=3*Men*Men;
}
