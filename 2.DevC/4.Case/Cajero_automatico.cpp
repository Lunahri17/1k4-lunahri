#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void ingresar_dinero(float dif, float saldof, float &saldotf);
void retirar_dinero(float drf, float saldof, float &saldotf);


main()
{
    int opcion;
    float saldo=10000,v,saldo2=0; //"saldo2" es la variable que devueldo el saldo de las operaciones.

    do
    {
        system("cls");
        printf("\n\tBienvenido a su cajero automatico");
        printf("\n\n1. Consultar saldo.");
        printf("\n\n2. Ingresar dinero a la cuenta.");
        printf("\n\n3. Retirar dienro de la cuenta.");
        printf("\n\n4. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                printf("\nSu saldo es: %.2f",saldo);
                break;
            
            case 2:
                printf("\nIngrese la cantidad de dinero que desea ingresar: ");
                scanf("%f",&v); //"v" Aqui utilizo la variable v para ingresar el dinero.

                if(v>0)
                {
                    ingresar_dinero(v,saldo,saldo2);

                    saldo=saldo2;
                    
                    printf("\nSu nuevo saldo es: %.2f",saldo);
                }
                else
                {
                    printf("\nIngreso una cantidad no valida, volvera al menu.");
                }
                break;
            
            case 3:
                printf("\nIngrese la cantidad de dinero que desea retirar: ");
                scanf("%f",&v); //"v" Aqui utilizo la variable v para retirar dinero.
                
                if(v>0 and v<saldo)
                {
                    retirar_dinero(v,saldo,saldo2);

                    saldo=saldo2;
                    
                    printf("\nSu nuevo saldo es: %.2f",saldo);
                }
                else
                {
                    printf("\nIngreso una cantidad no valida, volvera al menu.");
                }
                break;
            
            case 4:
                printf("\nGracias por utilizar nuestros servicios.");
                break;
            
            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.");
                break;
        }

        printf("\n\n");
        system("pause");
    } 
    while (opcion!=4);
}

void ingresar_dinero(float dif, float saldof, float &saldotf) 
{
    //"dif" es la variable que tiene el dinero que ingresa a la funcion
    //"saldof" es la variable que ingresa el saldo que tiene el cuelte
    //"saldotf" es el saldo que fue modificado en la funcion, que luego sera enviado a "main"
    
    saldotf=saldof+dif;
}

void retirar_dinero(float drf, float saldof, float &saldotf)
{
    //"dif" es la variable que tiene el dinero que se retira a la funcion

    saldotf=saldof-drf;
}