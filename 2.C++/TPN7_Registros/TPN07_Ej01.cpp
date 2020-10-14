#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Estructuras:
struct datosCliente
{
    int codCli;         //Codigo del cliente.
    char ApeNom[40];    //Apellido y nombre.
    char dire[60];      //Dimicilio.
    float monCred;      //Monto máximo del crédito que puede realizar en cada compra.
};

//Protipos de funciones:
void end();


//Variables globales:


main()
{
	int CantidadClientes;
    datosCliente Clientes;

    printf("\nIngrese la cantidad de cliente a ingresar: ");
    scanf("&d",&CantidadClientes);

    for (int i = 0; i < CantidadClientes; i++)
    {
        printf("\nIngrese el codigo del cliente %d",CantidadClientes+1);
        scanf("%d",&Clientes.codCli);

        printf("\nIngrese el apellido y nombre del cliente %d: ",CantidadClientes+1);
        _flushall();
        gets(Clientes.ApeNom);

        printf("\nIngrese la direccion del cliente %d: ",CantidadClientes+1);
        _flushall();
        gets(Clientes.dire);

        printf("\nIngrese el monto maximo de credito %d: ",CantidadClientes+1);
        scanf("%d",&Clientes.monCred);
    }
    
	
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