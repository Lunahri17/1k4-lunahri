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
void CargarVentas(int aux,Registro reg[20]);
void Modificar(int n,Registro reg[20]);
void Mostrar(int n,Registro reg[20]);

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
            break;
        
        case 3:
            if (n>0)
            {
                Mostrar(n,reg);    
            }
            else
            {
                printf("\nNo se ingresaron todavia empleados.");
            }
            break;
        
        case 4:
            if (n>0)
            {
                Modificar(n,reg);
            }
            else
            {
                printf("\nNo se ingresaron todavia empleados.");
            }
            break;

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

void Mostrar(int n,Registro reg[20])
{
    int i,j,k;
    float Acumulador=0;

    printf("\n  Documento      ");
    printf("  Apellido y Nombre");
    printf("      Lunes    ");
    printf("Martes ");
    printf("Miercoles");
    printf(" Jueves   ");
    printf("Viernes  ");
    printf("  Total\n");
    
    for (i = 0; i < 100; i++)
    {
        printf("=");
    }

    for (j = 0; j < n; j++)
    {
        Acumulador=0;
        printf("\n%10d  ",reg[j].NroDNI);
        printf("%25s  ",reg[j].ApeNom);
        
        for (k = 0; k < 5; k++)
        {
            printf("%7.2f\t",reg[j].VentSem[k]);
            Acumulador+=reg[j].VentSem[k];
        }
        printf("%7.2f",Acumulador);
    }
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

        for (int j = 0; j < 5; j++)
        {
            reg[i].VentSem[j]=0;
        }

        i++;

        printf("\nIngrese el DNI del empleado %d (0: Para cerrar): ",i+1);
        scanf("%d",&aux);
    }

    return i;
}

void RegistrarVentas(int n,Registro reg[20])
{
    char buscar[60];
    int aux;
    bool esta=false;

    system("cls");

    printf("\nIngrese el Apellido y Nombre del empleado: ");
    _flushall();
    gets(buscar);

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
        printf("\nRegresara al menu.");
    }
    
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
            scanf("%f",&reg[aux].VentSem[0]);
            break;
        
        case 1:
            printf("Ingrese el monto del dia Martes: ");
            scanf("%f",&reg[aux].VentSem[1]);
            break;
        
        case 2:
            printf("Ingrese el monto del dia Miercoles: ");
            scanf("%f",&reg[aux].VentSem[2]);
            break;
        
        case 3:
            printf("Ingrese el monto del dia Jueves: ");
            scanf("%f",&reg[aux].VentSem[3]);
            break;
        
        case 4:
            printf("Ingrese el monto del dia Viernes: ");
            scanf("%f",&reg[aux].VentSem[4]);
            break;
        
        default:
            printf("\nIngreso una opcion no valida.");
            break;
        }
    } while (opcion<0 and opcion>5);
}

void Modificar(int n,Registro reg[20])
{
    int buscar,aux,opcion;
    bool esta=false;

    system("cls");

    printf("\nIngrese el D.N.I. del empleado: ");
    scanf("%d",&buscar);

    for (int i = 0; i < n; i++)
    {
        if (reg[i].NroDNI==buscar)
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
        
        do
        {
            printf("\nIngrese el numero que corresponda al dia de la venta que desea modificar");
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
                scanf("%f",&reg[aux].VentSem[0]);
                break;
            
            case 1:
                printf("Ingrese el monto del dia Martes: ");
                scanf("%f",&reg[aux].VentSem[1]);
                break;
            
            case 2:
                printf("Ingrese el monto del dia Miercoles: ");
                scanf("%f",&reg[aux].VentSem[2]);
                break;
            
            case 3:
                printf("Ingrese el monto del dia Jueves: ");
                scanf("%f",&reg[aux].VentSem[3]);
                break;
            
            case 4:
                printf("Ingrese el monto del dia Viernes: ");
                scanf("%f",&reg[aux].VentSem[4]);
                break;
            
            default:
                printf("\nIngreso una opcion no valida.");
                break;
            }
        } while (opcion<0 and opcion>5);
        
        printf("\nSe modifico con exito!");
    }
    else
    {
        printf("\nEl D.N.I. no se encuentra en la lista.");
        printf("\nRegresara al menu.");
    }
}