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
        printf("\n\n2. .");
        printf("\n\n3. .");
        printf("\n\n4. .");
        printf("\n\n5. .");
        printf("\n\n6. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                cargar(arch,reg);
                break;
            
            case 2:
                
                break;
            
            case 3:
                
                break;
            
            case 4:
                
                break;
            
            case 5:
               
                break;

            case 6:
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







