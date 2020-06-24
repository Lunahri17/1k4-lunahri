#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float porcentaje(int numpar,int numimp);

main()
{
    system("cls");
    
    int x,contpar=0,contimpar=0;

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
        }
        
        system("cls");
        printf("\nIngrese otro numero, o un 0 para terminar: ");
        scanf("%d",&x);
    }
    
    printf("\nPorcentaje de numeros impares: %.2f",porcentaje(contpar,contimpar));

 	printf("\n\n");
	system("pause");
}

float porcentaje(int numpar,int numimp)
{
    float por;

    por=(float)numimp*100/(numpar+numimp);
    return por;
}