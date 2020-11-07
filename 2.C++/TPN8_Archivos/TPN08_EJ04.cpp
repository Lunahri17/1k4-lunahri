#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Fecha
{
    int dia;
    int mes;
    int year;
};

struct ventas
{
    int nro_vendedor;
    char apenom[40];
    int nro_factura;
    float importe_factura;
    int forma_venta;
    Fecha fecha_venta;
};

//Protipos de funciones:
void cargar(FILE *arch,ventas reg);
void mes_buscar(FILE *arch,ventas reg);
void forma_mes_buscar(FILE *arch,ventas reg);
void importe_mes_vendedor(FILE *arch,ventas reg);
void listar_datos(FILE *arch,ventas reg);

main()
{
    FILE *arch;
    ventas reg;
    int opcion;

	do
    {
        system("cls");
        printf("\n\tMenu:");
        printf("\n\n1. Cargar datos.");
        printf("\n\n2. Obtener las ventas totales de un mes.");
        printf("\n\n3. Obtener la cantidad de ventas de Contado y Credito en un mes.");
        printf("\n\n4. Obtener el importe total de un mes de un vendedor.");
        printf("\n\n5. Listar todos los datos.");
        printf("\n\n6. Modificar forma de venta de alguna factura.");
        printf("\n\n7. .");
        printf("\n\n8. .");
        printf("\n\n9. .");
        printf("\n\n10. .");
        printf("\n\n11. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                cargar(arch,reg);
                break;
            
            case 2:
                mes_buscar(arch,reg);
                break;
            
            case 3:
                forma_mes_buscar(arch,reg);
                break;
            
            case 4:
                importe_mes_vendedor(arch,reg);
                break;
            
            case 5:
                listar_datos(arch,reg);
                break;
            
            case 6:
                
                break;
            
            case 7:
                
                break;
            
            case 8:
                
                break;
            
            case 9:
                
                break;
            
            case 10:
                
                break;
            
            case 11:
                printf("\nGracias por utilizar nuestros servicios.");
                break;
            
            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.");
                break;
        }

        printf("\n\n");
        system("pause");
    } 
    while (opcion!=6);
}

void cargar(FILE *arch,ventas reg)
{       
    int aux;

    arch=fopen("ventas.dat","a+b");
    
    do
    {
        printf("\nIngrese el numero del vendedor,(0: Volver al menu): ");
        scanf("%d",&aux);
        if (aux>4 or aux<0)
        {
            printf("\nIngreso un vendedor incorrecto, vuelva a intentarlo\n");
            
        }
    } while (aux>4 or aux<0);

    while (aux!=0)
    {
        reg.nro_vendedor=aux;

        printf("\nIngrese el Apellido y Nombre del vendedor: ");
        _flushall();
        gets(reg.apenom);

        printf("\nIngrese el numero de la factura: ");
        scanf("%d",&reg.nro_factura);
        
        printf("\nIngrese el importe de la factura: ");
        scanf("%f",&reg.importe_factura);

        do
        {
            printf("\nIngrese la forma de pago (1: Contado / 2: Credito): ");
            scanf("%d",&reg.forma_venta);
            
            if (reg.forma_venta>2 or reg.forma_venta<1)
            {
                printf("\nIngreso un numero erroneo, vuelva a intentarlo.\n");
            }     
        } while (reg.forma_venta>2 or reg.forma_venta<1);
            
        printf("\nFecha de venta:");
        printf("\nDia: ");
        scanf("%d",&reg.fecha_venta.dia);
        printf("\nMes: ");
        scanf("%d",&reg.fecha_venta.mes);
        printf("\nAnio: ");
        scanf("%d",&reg.fecha_venta.year);
        
        fwrite(&reg,sizeof(reg),1,arch);
    
        do
        {
            printf("\nIngrese el numero del vendedor,(0: Volver al menu): ");
            scanf("%d",&aux);
            if (aux>4 or aux<0)
            {
                printf("\nIngreso un vendedor incorrecto, vuelva a intentarlo\n");
                
            }
        } while (aux>4 or aux<0);
    }
    
    fclose(arch);
}

void mes_buscar(FILE *arch,ventas reg)
{
    arch=fopen("ventas.dat","rb");
    int buscar;
    float acumulador=0;
    bool esta=false;

    if (arch==NULL)
    {
        printf("\nEl archivo no esta creado, o fue eliminado.");
    }
    else
    {
        printf("\nIngrese el mes a buscar: ");
        scanf("%d",&buscar);
        
        fread(&reg,sizeof(reg),1,arch);
        while (!feof(arch))
        {
            if (reg.fecha_venta.mes==buscar)
            {
                esta=true;
                acumulador+=reg.importe_factura;
            }
            fread(&reg,sizeof(reg),1,arch);
        }
        
        if (esta)
        {
            printf("\nLa venta total del mes %d es de: %.2f",buscar,acumulador);
        }
        else
        {
            printf("\nEl mes buscado no se encontro, volvera al menu.");
        }
    }
}

void forma_mes_buscar(FILE *arch,ventas reg)
{
    arch=fopen("ventas.dat","rb");
    int buscar,cont_cont=0,cont_cred=0;
    bool esta=false;

    if (arch==NULL)
    {
        printf("\nEl archivo no esta creado, o fue eliminado.");
    }
    else
    {
        printf("\nIngrese el mes a buscar: ");
        scanf("%d",&buscar);
        
        fread(&reg,sizeof(reg),1,arch);
        while (!feof(arch))
        {
            if (reg.fecha_venta.mes==buscar)
            {
                esta=true;
                if (reg.forma_venta==1)
                {
                    cont_cont++;
                }
                else
                {
                    cont_cred++;
                }
            }
            fread(&reg,sizeof(reg),1,arch);
        }
        
        if (esta)
        {
            printf("\nLa cantidad de ventas por contado del mes %d es de: %d",buscar,cont_cont);
            printf("\nLa cantidad de ventas por credito del mes %d es de: %d",buscar,cont_cred);
        }
        else
        {
            printf("\nEl mes buscado no se encontro, volvera al menu.");
        }
    }
}

void importe_mes_vendedor(FILE *arch,ventas reg)
{
    arch=fopen("ventas.dat","rb");
    int buscar_mes,buscar_vend,cont_cont=0,cont_cred=0;
    bool esta=false;
    char buscar_apenom[40];
    float acumulador=0;

    if (arch==NULL)
    {
        printf("\nEl archivo no esta creado, o fue eliminado.");
    }
    else
    {
        printf("\nIngrese el mes a buscar: ");
        scanf("%d",&buscar_mes);
        
        printf("\nIngrese el vendedor a buscar: ");
        scanf("%d",&buscar_vend);

        printf("\nIngrse el Apellido y Nombre del vendedor: ");
        _flushall();
        gets(buscar_apenom);

        fread(&reg,sizeof(reg),1,arch);
        while (!feof(arch))
        {
            if (reg.fecha_venta.mes==buscar_mes)
            {
                if (reg.nro_vendedor==buscar_vend)
                {
                    if (strcmp(reg.apenom,buscar_apenom)==0)
                    {
                        esta=true;
                        acumulador+=reg.importe_factura;
                    }
                }
            }

            fread(&reg,sizeof(reg),1,arch);
        }
        
        if (esta)
        {
            printf("\nEl importe total del mes %d del vendedor %d es de: %.2f",buscar_mes,buscar_vend,acumulador);
        }
        else
        {
            printf("\nLos datos ingresados no se encontraron, volvera al menu.");
        }
    }
}

void listar_datos(FILE *arch,ventas reg)
{
       arch=fopen("ventas.dat","rb");
    int buscar;
    float acumulador=0;
    bool esta=false;

    if (arch==NULL)
    {
        printf("\nEl archivo no esta creado, o fue eliminado.");
    }
    else
    {    
        fread(&reg,sizeof(reg),1,arch);
        while (!feof(arch))
        {
            printf("\nNumero del vendedor: %d",reg.nro_vendedor);
            printf("\nApellido y nombre del vendedor: %s",reg.apenom);
            printf("\nNumero de factura: %d",reg.nro_factura);
            printf("\nImporte: %.2f",reg.importe_factura);
            if (reg.forma_venta==1)
            {
                printf("\nVenta realizada por: Contado.");
            }
            else
            {
                printf("\nVenta realizada por: Credito.");
            }
            printf("\nFecha de venta:");
            printf("\nDia: %d",reg.fecha_venta.dia);
            printf("\nMes: %d",reg.fecha_venta.mes);
            printf("\nAnio: %d",reg.fecha_venta.year);
            printf("\n------------------------------------------------------------");
            fread(&reg,sizeof(reg),1,arch);
        }
    } 
}

















