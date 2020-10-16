#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Estructuras:
struct Fecha
{
    int dia;
    int mes
    int year;
};

struct Notas
{
    float PrimerTri;
    float SegundoTri;
    float TercerTri;
    float PromAnual;
};

struct Alumno
{
    int NroDNI;
    char ApeNom[60];
    Fecha Nacimiento;
    Notas Trimestre;
};

//Protipos de funciones:
void end();

main()
{
    Alumno Listado;
	int N,Mayor8=0;

    printf("\nIngrese la cantidad de alumnos a ingresar: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        system("cls");

        printf("\nIngrese el D.N.I. del alumno %d: ",i+1);
        scanf("%d",&Listado.NroDNI);

        printf("\nIngrese el Apellido y Nombre del alumno %d",i+1);
        _flushall();
        gets(Listado.ApeNom);

        printf("\nIngrese la fecha de nacimiento del alumno %d: ",i+1);
        printf("\nDia: ");
        scanf("%d",&Listado.Nacimiento.dia);
        printf("\nMes: ");
        scanf("%d",&Listado.Nacimiento.mes);
        printf("\nAnio: ");
        scanf("%d",&Listado.Nacimiento.year);

        printf("\nIngrese las notas de cada trimestre del alumno %d:",i+1);
        printf("\nPrimer trimestre: ");
        scanf("%f",&Listado.Trimestre.PrimerTri);
        printf("\nSegundo trimestre: ");
        scanf("%f",&Listado.Trimestre.SegundoTri);
        printf("\nTercer trimestre: ");
        scanf("%f",&Listado.Trimestre.TercerTri);

        Listado.Trimestre.PromAnual=(Listado.Trimestre.PrimerTri+Listado.Trimestre.SegundoTri+Listado.Trimestre.TercerTri)/3;

        if (Listado.Trimestre.PromAnual>=8)
        {
            Mayor8++;
        }

        printf("\nHay %d Alumnos que superaron el promedio de 8");
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