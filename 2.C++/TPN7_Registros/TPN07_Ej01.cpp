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
void Mostrar(int i,datosCliente Clientes);

main()
{
	int CantidadClientes=0,Contador=0;
    datosCliente Clientes;

    printf("\nIngrese la cantidad de cliente a ingresar: ");
    scanf("%d",&CantidadClientes);

    for (int i = 0; i < CantidadClientes; i++)
    {
        printf("\nIngrese el codigo del cliente %d: ",i+1);
        scanf("%d",&Clientes.codCli);

        printf("\nIngrese el apellido y nombre del cliente %d: ",i+1);
        _flushall();
        gets(Clientes.ApeNom);

        printf("\nIngrese la direccion del cliente %d: ",i+1);
        _flushall();
        gets(Clientes.dire);

        printf("\nIngrese el monto maximo de credito %d: ",i+1);
        scanf("%f",&Clientes.monCred);
        
        system("cls");

        Mostrar(i,Clientes);

        system("cls");

        if (Clientes.monCred>=30000)
        {
            Contador++;
        }
    }

    printf("\nHay %d clientes con un monto de credito superior a $30000",Contador);

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