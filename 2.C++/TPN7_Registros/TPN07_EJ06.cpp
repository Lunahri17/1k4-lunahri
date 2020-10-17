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
    char Propietario[40];
    float Area;
    int TipoObra; //0: vivienda basica, 1: vivienda de Lujo, 2: Edificio, 3: predio especial.
    Fecha Registracion[10];
    float Monto[10];
};


//Protipos de funciones:
void end();


main()
{
	
	
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