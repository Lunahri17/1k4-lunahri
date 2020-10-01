#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void CargarVectores(cadena Asignaturas[30],int Inscriptos[100],int NroDeAsignaturas);

main()
{
	typedef cadena[100];
    cadena Asignaturas[30];

    int NroDeAsignaturas,Inscriptos[100];

    printf("\nIngrese la cantidad de asignaturas: ");
    scanf("%d",&NroDeAsignaturas);

    CargarVectores(Asignaturas,Inscriptos,NroDeAsignaturas);
	
	end();
}

void CargarVectores(cadena Asignaturas[30],int Inscriptos[100],int NroDeAsignaturas)
{
    for (int i = 0; i < NroDeAsignaturas; i++)
    {
        printf("\nIngerese el nombre se la asgnatura %d",i+1);
        _flushall();
        gets(Asignatura[i]);
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