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

    printf("\nIngrese la cantidad de cliente a ingresar: ");
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
        scanf("%d",&Clientes.fecha.dia);
        printf("\nMes: ");
        scanf("%d",&Clientes.fecha.mes);
        printf("\nAnio: ");
        scanf("%d",&Clientes.fecha.year);

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
            aux2=Clientes.fecha.dia;
            aux3=Clientes.fecha.mes;
            aux4=Clientes.fecha.year;
        } 
    }
        
    printf("\nLa fecha con la menor venta fue: %d/%d/%d",aux2,aux3,aux4);

	end();
}

void Mostrar(int i,datosCliente Clientes)
{
    printf("\nIngrese el codigo del cliente %d: %d",i+1,Clientes.codCli);

    printf("\n\nIngrese el apellido y nombre del cliente %d: ",i+1);
    puts(Clientes.ApeNom);

    printf("\nIngrese la direccion del cliente %d: ",i+1);
    puts(Clientes.dire);

    printf("\nIngrese el monto maximo de credito %d: %.2f\n\n",i+1,Clientes.monCred);

    printf("\nIngrese la fecha: ");
    printf("\nDia: %d",&Clientes.fecha.dia);
    printf("\nMes: %d",&Clientes.fecha.mes);
    printf("\nAnio: %d",&Clientes.fecha.year);

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