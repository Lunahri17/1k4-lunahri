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


//Variables globales:


main()
{
	int CantidadClientes=0;
    datosCliente Clientes;

    printf("\nIngrese la cantidad de cliente a ingresar: ");
    scanf("%d",&CantidadClientes);

    
	
	end();
}



void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}