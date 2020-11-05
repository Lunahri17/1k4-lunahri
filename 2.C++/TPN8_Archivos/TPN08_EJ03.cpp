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
void vendedor(FILE *arch,ventas reg);
void cargar(FILE *arch,ventas reg,int i);

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
               vendedor(arch,reg);
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

void vendedor(FILE *arch,ventas reg)
{
    int i;

    do
    {
        system("cls");
        printf("\nIngrese el numero del vendedor,(4: Volver al menu): ");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            cargar(arch,reg,i);
            break;
        
        case 2:
            cargar(arch,reg,i);
            break;

        case 3:
            cargar(arch,reg,i);
            break;

        case 4:
            break;

        default:
            printf("\nIngreso un vendedor incorrecto.");
            break;
        }    
    } while (i!=4);
    
}

void cargar(FILE *arch,ventas reg,int i)
{       
    int k=0,aux;

    arch=fopen("ventas.dat","a+b");
    fseek(arch,i,SEEK_SET); //esto esta como el culo

    reg[i].nro_vendedor=i;
    
    printf("\nIngrese el Apellido y Nombre del vendedor %d: ",i+1);
    gets(reg[i].apenom);

    printf("\nIngrese el numero de la factura (0: para salir): ");
    scanf("%d",&aux);

    while (aux!=0)
    {
        reg[i].nro_factura[k]=aux;

        printf("\nIngrese el importe de la factura: ");
        scanf("%f",&reg[i].importe_factura[k]);

        do
        {
            printf("\nIngrese la forma de pago (1: Contado / 2: Credito): ");
            scanf("%d",&reg[i].forma_venta[k]);
            
            if (reg[i].forma_venta[k]>2 or reg[i].forma_venta[k]<1)
            {
                printf("\nIngreso un numero erroneo, vuelva a intentarlo.");
            }     
        } while (reg[i].forma_venta[k]>2 or reg[i].forma_venta[k]<1);
            
        printf("\nFecha de venta:");
        printf("\nDia: ");
        scanf("%d",&reg[i].fecha_venta[k].dia);
        printf("\nMes: ");
        scanf("%d",&reg[i].fecha_venta[k].mes);
        printf("\nAnio: ");
        scanf("%d",&reg[i].fecha_venta[k].year);
        
        fwrite(&reg,sizeof(reg),1,arch);
    }
    
    fclose(arch);
}







