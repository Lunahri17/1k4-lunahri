#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int horas(int x1);
int mul60(int x1);

main()
{
    int x;

    do
    {
        system("cls");
        
        printf("\nIngrese la cantidad de dias (debe ser superior a 100): ");
        scanf("%d",&x);

        if (x>99)
        {
            printf("\nSu equivalente en horas: %.2f",horas(x));
            printf("\nSu equivalente en minutos: %.2f",mul60(horas(x)));
            printf("\nSu equivalente en segundos: %.2f",mul60(mul60(horas(x))));

        }
        else
        {
            system("cls");
            printf("Ingreso una cantidad menor a 100 dias.");
        }
        
        
    } while (x<100);
    

 	printf("\n\n");
	system("pause");
}

int horas(int x1)
{
    float h;

    h=x1*24;
    return h;
}

int mul60(int x1)
{
    float val;

    val=(float)x1*60;
    return val;
}