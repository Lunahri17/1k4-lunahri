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
    Fecha Registro;
    float Monto;
};


//Protipos de funciones:
void CargarClientes(int &i,Clientes cli[30]);
void RegistrarMonto(int n,Clientes cli[30]);
void Listar(int n, Clientes cli[30]);
void TipoDeObra(int n);


main()
{
	Clientes cli[30];
    int i=0,opcion;

    printf("\nIngrese datos de al menos 5 clientes.");
    CargarClientes(i,cli);
    
    do
    {
        system("cls");
        printf("\n\t..Sistema de registro de propietarios");
        printf("\n\n1. Cargar propietario.");
        printf("\n\n2. Registar el monto de un propietario.");
        printf("\n\n3. Listar datos de un propietario.");
        printf("\n\n4. Salir");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            CargarClientes(i,cli);
            break;
        
        case 2:
            RegistrarMonto(i,cli);
            break;
        
        case 3:
            Listar(i,cli);
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
    } while (opcion!=4);
    
	
}

void Listar(int n, Clientes cli[30])
{
    char buscar[40];
    bool esta=false;
    int aux;

    do
    {
        system("cls");

        printf("\nIngresar el Expediente del propietario: ");
        _flushall();
        gets(buscar);

        for (int i = 0; i < n; i++)
        {
            if (strcmp(cli[i].NroExpe,buscar)==0)
            {
                esta=true;
                aux=i;
            }
        }

        if (esta==false)
        {
            printf("\nEl Numero de expediente no se encontro, vuelva a intentarlo\n");
            system("pause");
        }
    } while (esta==false);
    
    system("cls");

    printf("\nExpediente: ");
    puts(cli[aux].NroExpe);
    printf("\nPropietario: ");
    puts(cli[aux].ApeNom);
    printf("\nTipo de obra: ");
    TipoDeObra(cli[aux].TipoObra);

    //tabla:
    printf("\n\nFecha                               Monto");
    printf("\n===========================================");
    printf("\n%d/%d/%d",cli[aux].Registro.dia,cli[aux].Registro.mes,cli[aux].Registro.year);
    printf("\t%-6.2f",cli[aux].Monto);
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
            } while (aux<0 or aux>3);

            printf("\nIngrese la fecha del registro:");
            printf("\nDia: ");
            scanf("%d",&cli[i].Registro.dia);
            printf("\nMes: ");
            scanf("%d",&cli[i].Registro.mes);
            printf("\nAnio: ");
            scanf("%d",&cli[i].Registro.year);
            
            printf("\nIngrese el monto inicial: ");
            scanf("%f",&cli[i].Monto);
        }

        printf("\nDesea ingresar otro propietario? (1: Si / 0: No): ");
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

        printf("\nIngrese la fecha del registro:");
        printf("\nDia: ");
        scanf("%d",&cli[i].Registro.dia);
        printf("\nMes: ");
        scanf("%d",&cli[i].Registro.mes);
        printf("\nAnio: ");
        scanf("%d",&cli[i].Registro.year);
        
        printf("\nIngrese el monto inicial: ");
        scanf("%f",&cli[i].Monto);

        i++;
        
        printf("\n¿Desea ingresar otro propietario? (1: Si / 0: No): ");
        scanf("%d",&aux2);
    }
}

void RegistrarMonto(int n,Clientes cli[30])
{
    char buscar1[40];
    bool esta=false;
    int aux1,buscar2;

    do
    {
        system("cls");

        printf("\nIngresar el Expediente del propietario: ");
        _flushall();
        gets(buscar1);

        for (int i = 0; i < n; i++)
        {
            if (strcmp(cli[i].NroExpe,buscar1)==0)
            {
                esta=true;
                aux1=i;
            }
        }

        if (esta==false)
        {
            printf("\nEl Numero de expediente no se encontro, vuelva a intentarlo\n");
            system("pause");
        }
    } while (esta==false);
    
    esta=false;

    printf("\nIngrese la fecha de adelanto:"); 
    do
    {
        printf("\nDia: ");
        scanf("%d",&buscar2);

        if (cli[aux1].Registro.dia==buscar2)
        {
            esta=true;
        }
        
        if (esta==false)
        {
            printf("\nEl dia ingresado no se encontro, vuelva a intentarlo\n");
            system("pause");
        }
    } while (esta==false);
    
    esta=false;

    do
    {
        printf("\nMes: ");
        scanf("%d",&buscar2);

        if (cli[aux1].Registro.mes==buscar2)
        {
            esta=true;
        }
        
        if (esta==false)
        {
            printf("\nEl mes ingresado no se encontro, vuelva a intentarlo\n");
            system("pause");
        }
    } while (esta==false);

    esta=false;

    do
    {
        printf("\nAnio: ");
        scanf("%d",&buscar2);

        if (cli[aux1].Registro.year==buscar2)
        {
            esta=true;
        }
        
        if (esta==false)
        {
            printf("\nEl anio ingresado no se encontro, vuelva a intentarlo\n");
            system("pause");
        }
    } while (esta==false);
    
    printf("\nIngresar el monto: ");
    scanf("%f",&cli[aux1].Monto);
}

void TipoDeObra(int n)
{
    switch (n)
    {
    case 0:
        printf("Vivienda basica.");
        break;
    
    case 1:
        printf("Vivienda de lujo.");
        break;

    case 2:
        printf("Edificio.");
        break;
    
    case 3:
        printf("Predio especial.");
        break;

    default:
        printf("\n Esta opcion no debe aparecer.");
        break;
    }
}