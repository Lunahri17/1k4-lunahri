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

struct Registro
{
    char ApeNom[60];
    int NroDNI;
    Fecha FechIng;
    float VentSem[5];
};

//Protipos de funciones:
int CargarEmpleados(int &i,Registro reg[20]);
void RegistrarVentas(int n,Registro reg[20]);


main()
{
    Registro reg[20];
	int opcion,i=0,n=0;

    do
    {
        system("cls");
        printf("\n\t.Sistema de seguimiento de Empleados.");
        printf("\n\n1. Cargar empleados.");
        printf("\n\n2. Registrar venta de un empleado.");
        printf("\n\n3. Listado de ventas.");
        printf("\n\n4. Modificar datos de la lista.");
        printf("\n\n5. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            n=CargarEmpleados(i,reg);
            break;
        
        case 2:
            if (n>0)
            {
                RegistrarVentas(n,reg);
            }
            else
            {
                printf("\nNo se ingresaron todavia empleados.");
            }

        case 5:
            printf("\nGracias por utilizar nuestros servicios.");
            break;

        default:
            printf("\nIngreso una opcion incorrecta, volvera al menu.");
            break;
        }

        printf("\n\n");
        system("pause");
    } while (opcion!=5);
    
}

int CargarEmpleados(int &i,Registro reg[20])
{
    int aux;
    
    printf("\nIngrese el DNI del empleado %d (0: Para cerrar): ",i+1);
    scanf("%d",&aux);

    while (aux!=0)
    {
        reg[i].NroDNI=aux;

        printf("\nIngrese el Apellido y Nombre del empleado %d: ",i+1);
        _flushall();
        gets(reg[i].ApeNom);

        printf("\nFecha de ingreso a la empresa:");
        printf("\nDia: ");
        scanf("%d",&reg[i].FechIng.dia);
        printf("\nMes: ");
        scanf("%d",&reg[i].FechIng.mes);
        printf("\nAnio: ");
        scanf("%d",&reg[i].FechIng.year);

        i++;

        printf("\nIngrese el DNI del empleado %d (0: Para cerrar): ",i+1);
        scanf("%d",&aux);
    }

    return i;
}

void RegistrarVentas(int n,Registro reg[20])
{
    char buscar[60];
    int aux1;
    bool stop=false,esta=false;

    do
    {
        system("cls");

        printf("\nIngrese el Apellido y Nombre del empleado (z: Para cancelar): ");
        _flushall();
        gets(buscar);

        if (strcmp(buscar,'z')==0)
        {
            stop==true;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (strcmp(reg[i].ApeNom,buscar)==0)
                {
                    aux=i;
                    i=n;
                    esta=true;
                }
            }

            if (esta)
            {
                system("cls");

                printf("\nEmpleado Nro:%d ",aux+1);
                puts(reg[aux].ApeNom);
                
                CargarVentas(aux,reg);
                
                printf("\nSe cargo con exito!");
            }
            else
            {
                printf("\nEl apellido y nombre ingresado no se encuentra en la lista.");
            }
        } 

        printf("\n\n");
        system("pause"); 
    } while (stop==false);
}

void CargarVentas(int aux,Registro reg[20])
{
    int opcion;

    do
    {
        printf("\nIngrese el numero que corresponda al dia de la venta");
        printf("\n0. Lunes.");
        printf("\n1. Martes.");
        printf("\n2. Miercoles.");
        printf("\n3. Jueves.");
        printf("\n4. Viernes.");
        printf("\nIngrese la opcion: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 0:
            printf("Ingrese el monto del dia Lunes: ");
            scanf("%f",&reg[aux],VentSem[0]);
            break;
        
        case 1:
            printf("Ingrese el monto del dia Martes: ");
            scanf("%f",&reg[aux],VentSem[1]);
            break;
        
        case 2:
            printf("Ingrese el monto del dia Miercoles: ");
            scanf("%f",&reg[aux],VentSem[2]);
            break;
        
        case 3:
            printf("Ingrese el monto del dia Jueves: ");
            scanf("%f",&reg[aux],VentSem[3]);
            break;
        
        case 4:
            printf("Ingrese el monto del dia Viernes: ");
            scanf("%f",&reg[aux],VentSem[4]);
            break;
        
        default:
            printf("\nIngreso una opcion no valida.");
            break;
        }

        printf("\n\n");
        system("pause");
    } while (opcion<0 and opcion>5);

}

