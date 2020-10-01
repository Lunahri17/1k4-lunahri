#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void CargarVectores(int Inscriptos[100],int NroDeAsignaturas);

//Variables Globales
typedef char cadena[30];
cadena Asignaturas[30];

main()
{
	int NroDeAsignaturas,Inscriptos[100];

    printf("\nIngrese la cantidad de asignaturas: ");
    scanf("%d",&NroDeAsignaturas);

    CargarVectores(Inscriptos,NroDeAsignaturas);
	
	end();
}

void CargarVectores(int Inscriptos[100],int NroDeAsignaturas)
{
    for (int i = 0; i < NroDeAsignaturas; i++)
    {
        printf("\nIngerese el nombre se la asgnatura %d",i+1);
        _flushall();
        gets(Asignaturas[i]);
        _flushall();

        printf("\nIngrese la cantidad de alumanos inscriptos de la asignatura %s",Asignaturas[i]);
        scanf("%d",&Inscriptos[i]);
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