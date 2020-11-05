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
    File *arch;
    ventas reg[5];
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
    int k=0,aux;

    arch=fopen("ventas.dat","a+b");
    
    do
    {
        printf("\nIngrese el numero del vendedor,(0: Volver al menu): ");
        scanf("%d",&aux);
        if (aux>4 or aux<0)
        {
            printf("\nIngreso un vendedor incorrecto, vuelva a intentarlo");
            
        }
    } while (aux>4 or aux<0);

    while (aux!=0)
    {
        reg[k].nro_vendedor=aux;

        printf("\nIngrese el Apellido y Nombre del vendedor %d: ",i+1);
        gets(reg[k].apenom);

        printf("\nIngrese el numero de la factura (0: para salir): ");
        scanf("%d",&reg[k].nro_factura);
        
        printf("\nIngrese el importe de la factura: ");
        scanf("%f",&reg[k].importe_factura);

        do
        {
            printf("\nIngrese la forma de pago (1: Contado / 2: Credito): ");
            scanf("%d",&reg[k].forma_venta);
            
            if (reg[k].forma_venta>2 or reg[k].forma_venta<1)
            {
                printf("\nIngreso un numero erroneo, vuelva a intentarlo.");
            }     
        } while (reg[k].forma_venta>2 or reg[k].forma_venta<1);
            
        printf("\nFecha de venta:");
        printf("\nDia: ");
        scanf("%d",&reg[k].fecha_venta.dia);
        printf("\nMes: ");
        scanf("%d",&reg[k].fecha_venta.mes);
        printf("\nAnio: ");
        scanf("%d",&reg[k].fecha_venta.year);
        
        fwrite(&reg,sizeof(reg),1,arch);
        k++;

        do
        {
            printf("\nIngrese el numero del vendedor,(0: Volver al menu): ");
            scanf("%d",&aux);
            if (aux>4 or aux<0)
            {
                printf("\nIngreso un vendedor incorrecto, vuelva a intentarlo");
                
            }
        } while (aux>4 or aux<0);
    }
    
    fclose(arch);
}







