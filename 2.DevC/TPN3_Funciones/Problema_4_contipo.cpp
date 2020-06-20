#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float porcentaje(int x1, int x2);

main()
{
    int c,num_maq,env_pro=0,env_falla=0,n1,n2;

    system("cls");

    printf("\n\nIngrese el codigo de la maquina: ");
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
                printf("\nLa cantidad de envases con fallas no puede ser mayor a las producidad");
                printf("Vuelva a ingresar los datos de la semana %d.",c);
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
        printf("\nPorcentaje de envases con fallos: %f",porcentaje(env_pro,env_falla));
               
        printf("\n\nIngrese el codigo de la maquina (0 para terminar): ");
        scanf("%d",&num_maq);
    }
    
    printf("Gracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}


float porcentaje(int x1, int x2)
{
    float por;
    por=(float)(x2*100)/x1;
    return por;
}