#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float porcentaje(int x1, int x2);

main()
{
    int c,num_maq,env_pro=0,env_falla=0,n1,n2;

    system("cls");

    printf("\nIngrese el codigo de la maquina: ");
    scanf("%d",&num_maq);

    while (num_maq!=0)
    {
        system("cls");

        for(c=1;c<5;c++)
        {
            system("cls");

            printf("\n\tDatos semana %d:",c);

            printf("\n\nIngrese la cantidad de envases producidos: ");
            scanf("%d",&n1);
            
            printf("\nIngrese la cantidad de envases con fallas: ");
            scanf("%d",&n2);
            if (n2>n1)
            {
                printf("\nLa cantidad de envases con fallas no puede ser mayor a las producidas");
                printf("\nVuelva a ingresar los datos de la semana %d.\n",c);
                system("pause");
                c--;
            }
            else
            {
                env_pro=env_pro+n1;
                env_falla=env_falla+n2;   
            }
        }
        
        system("cls");

        printf("\n\nCodigo de la maquina: %d",num_maq);
        printf("\nCantidad de envases producidos: %d",env_pro);
        printf("\nPorcentaje de envases con fallos: %.2f",porcentaje(env_pro,env_falla));
               
        printf("\n\nIngrese el codigo de la maquina (0 para terminar): ");
        scanf("%d",&num_maq);

        env_pro=0;
        env_falla=0;
    }
    
    printf("\nGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}


float porcentaje(int x1, int x2)
{
    float por;
    if (x1==0)
    {
        por=0;
    }
    else
    {
        por=(float)(x2*100)/x1;
    }
    return por;
}