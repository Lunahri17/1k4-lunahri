#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float porcentaje(int numpar,int numimp);
float sumaimp(int numimp,int totalimp);

main()
{
    system("cls");

    int x,contpar=0,contimpar=0,sumaimp=0;

    printf("Ingrese un numero (0 para cancelar): ");
    scanf("%d",&x);

    while (x!=0)
    {  
        if (x%2==0)
        {
            contpar++;
        }
        else
        {
            contimpar++;
            sumaimp=sumaimp+x;
        }
        
        system("cls");
        printf("\nIngrese otro numero, o un 0 para terminar: ");
        scanf("%d",&x);
    }
    
    if (x!=0)
    {
        printf("\nPorcentaje de numeros pares: %.2f",porcentaje(contpar,contimpar));
        printf("\nPromedio de numeros impares: %.2f",promedio(contimpar,sumaimp))
    }
    
    system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}

float porcentaje(int numpar,int numimp)
{
    float por;

    por=(float)numpar*100/(numpar+numimp);
    return por;
}

float sumaimp(int numimp,int totalimp)
{
    float prom;

    prom=(float)totalimp/numimp;
    return prom;
}