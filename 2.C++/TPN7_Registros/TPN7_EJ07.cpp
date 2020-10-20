#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct Empleados
{
    char ApeNom[40];
    char Direccion[40];
    int YearIngreso;
    int YearProceso;
    int Antiguedad;
};


//Protipos de funciones:
void end();
int IngresarDatos(Empleados emp[20]);
void CalculoAntiguedad(int i,Empleados emp[20]);


//Variables globales:


main()
{
	Empleados emp[20];
    int i;

    i=IngresarDatos(emp);

    CalculoAntiguedad(i,emp);
	
	end();
}

int IngresarDatos(Empleados emp[20])
{
    int stop=1,i=0;

    do
    {
        printf("\n\n------------------------------------------------------------------------------\n");

        printf("\nIngrese el Apellido y Nombre del empleado %d: ",i+1);
        _flushall();
        gets(emp[i].ApeNom);

        printf("\nIngrese el Domicilio del empleado %d: ",i+1);
        _flushall();
        gets(emp[i].Direccion);

        printf("\nIngrese el anio de ingreso del empleado %d: ",i+1);
        scanf("%d",&emp[i].YearIngreso);

        printf("\nIngrese el anio de proceso del empleado %d: ",i+1);
        scanf("%d",&emp[i].YearProceso);

        i++;
        
        if (i!=20)
        {
            printf("\nDesea ingresar otro empleado? (1: Si / 0: No): ");
            scanf("%d",&stop);
        }
        else
        {
            stop=0;
        }       
    } while (stop!=0);
    
    return i;    
}

void CalculoAntiguedad(int i,Empleados emp[20])
{
    system("cls");

    for (int k = 0; k < i; k++)
    {
        emp[i].Antiguedad=emp[i].YearProceso-emp[i].YearIngreso;
        printf("\nAntiguedad del empleado %d: ",k+1);
    }
    
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}