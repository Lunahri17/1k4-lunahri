#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Estructuras:
struct fecha
{
    int dia;
    int mes;
    int year;
};

struct datosCliente
{
    char ApeNom[40];    //Apellido y nombre del cliente.
    char dire[60];      //Domicilio particular del cliente.
    float monVehi;      //Monto del vehiculo.
    fecha fecVenta;     //Fecha de venta del vehiculo.
};

//Protipos de funciones:
void end();
void Mostrar(int i,datosCliente Clientes);

//Variables globales:


main()
{
	int CantidadClientes=0,aux2,aux3,aux4;
    float aux1;
    datosCliente Clientes;

    printf("\nIngrese la cantidad de clientes a ingresar: ");
    scanf("%d",&CantidadClientes);

    for (int i = 0; i < CantidadClientes; i++)
    {
        printf("\nIngrese el apellido y nombre del cliente %d: ",i+1);
        _flushall();
        gets(Clientes.ApeNom);

        printf("\nIngrese la direccion del cliente %d: ",i+1);
        _flushall();
        gets(Clientes.dire);

        printf("\nIngrese el monto del vehiculo %d: ",i+1);
        scanf("%f",&Clientes.monVehi);
        
        printf("\nIngrese la fecha: ");
        printf("\nDia: ");
        scanf("%d",&Clientes.fecVenta.dia);
        printf("\nMes: ");
        scanf("%d",&Clientes.fecVenta.mes);
        printf("\nAnio: ");
        scanf("%d",&Clientes.fecVenta.year);

        system("cls");

        Mostrar(i,Clientes);

        system("cls");

        if (i==0)
        {
            aux1=Clientes.monVehi;
        }

        if (aux1>=Clientes.monVehi)
        {
            aux1=Clientes.monVehi;
            aux2=Clientes.fecVenta.dia;
            aux3=Clientes.fecVenta.mes;
            aux4=Clientes.fecVenta.year;
        } 
    }
        
    printf("\nLa fecha con la menor venta fue: %d/%d/%d",aux2,aux3,aux4);

	end();
}

void Mostrar(int i,datosCliente Clientes)
{
    printf("\n\nApellido y nombre del cliente %d: ",i+1);
    puts(Clientes.ApeNom);

    printf("\nDireccion del cliente %d: ",i+1);
    puts(Clientes.dire);

    printf("\nMonto del vehiculo %d: %.2f",i+1,Clientes.monVehi);

    printf("\nIngrese la fecha: ");
    printf("\nDia: %d",Clientes.fecVenta.dia);
    printf("\nMes: %d",Clientes.fecVenta.mes);
    printf("\nAnio: %d\n\n",Clientes.fecVenta.year);

    system("pause");
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}