#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Fecha
{
    int dia;
    int mes;
    int year;
};

struct Clientes
{
    char NroExpe[40];
    char ApeNom[40];
    float Area;
    int TipoObra; //0: vivienda basica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial.
    Fecha Registracion[10];
    float Monto[10];
};


//Protipos de funciones:
void CargarClientes(int &i,Clientes cli[30]);


main()
{
	Clientes cli[30];
    int i=0;

    printf("\nIngrese datos de al menos 5 clientes.");
    CargarClientes(i,cli);
    
	
}

void CargarClientes(int &i,Clientes cli[30])
{
    int aux,aux2=1;

    if (i<5)
    {
        for (i = 0; i < 5; i++)
        {
            printf("\nIngrese el expediente del propietario %d: ",i+1);
            _flushall();
            gets(cli[i].NroExpe);

            printf("\nIngrese el Apellido y Nombre del propietario %d: ",i+1);
            _flushall();
            gets(cli[i].ApeNom);

            printf("\nIngrese el area total de la propiedad: ");
            scanf("%f",&cli[i].Area);

            do
            {
                printf("\nIngrese el tipo de obra (0: vivienda basica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial.): ");
                scanf("%d",&aux);
                if (aux>=0 and aux<4)
                {
                    cli[i].TipoObra=aux;
                }
                else
                {
                    printf("\nSe ingreso un dato no valido, vuleva a intentarlo.");
                }
            } while (aux<0 and aux>3);
            
            printf("\nIngrese el monto inicial: ");
            scanf("%f",&cli[i].Monto[0]);
        }

        printf("\n¿Desea ingresar otro propietario? (1: Si / 0: No)");
        scanf("%d",&aux2);
    }

    while (aux2==1)
    {
        printf("\nIngrese el expediente del propietario %d: ",i+1);
        _flushall();
        gets(cli[i].NroExpe);

        printf("\nIngrese el Apellido y Nombre del propietario %d: ",i+1);
        _flushall();
        gets(cli[i].ApeNom);

        printf("\nIngrese el area total de la propiedad: ");
        scanf("%f",&cli[i].Area);

        do
        {
            printf("\nIngrese el tipo de obra (0: vivienda basica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial.): ");
            scanf("%d",&aux);
            if (aux>=0 and aux<4)
            {
                cli[i].TipoObra=aux;
            }
            else
            {
                printf("\nSe ingreso un dato no valido, vuleva a intentarlo.");
            }
        } while (aux<0 and aux>3);
        
        printf("\nIngrese el monto inicial: ");
        scanf("%f",&cli[i].Monto[0]);

        i++;
        
        printf("\n¿Desea ingresar otro propietario? (1: Si / 0: No)");
        scanf("%d",&aux2);
    }
}