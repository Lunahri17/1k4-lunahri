#include <stdio.h>

float kw,c,t,td;

main()
{
    printf("Ingrese el valor del KW: ");
    scanf("%f",&kw);

    printf("\nIngrese el Consumo: ");
    scanf("%f",&c);

    if(c==0)
    {
        printf("No hay consumo.");
    }
    else
    {
    	t=kw*c;
        if(c<350)
        {
            td=t*0.95;
            
			printf("\nTotal a pagar: %f",td);
        }
        
        else
        {
            printf("\nTotal a pagar: %f",t);
        }
        
    }
}
