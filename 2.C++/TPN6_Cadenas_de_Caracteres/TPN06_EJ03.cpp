#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void CargarVectores(int Inscriptos[100],int NroDeAsignaturas);
int MayorInscriptos(int Inscriptos[100],int NroDeAsignaturas);
int Buscar(char PalabraBuscar[30],int NroDeAsignaturas);

//Variables Globales
typedef char cadena[30];
cadena Asignaturas[30];

main()
{
	int NroDeAsignaturas,Inscriptos[100],Stop=1,aux;
    char PalabraBuscar[30];

    printf("\nIngrese la cantidad de asignaturas: ");
    scanf("%d",&NroDeAsignaturas);

    CargarVectores(Inscriptos,NroDeAsignaturas);

    printf("\nLa asignatura con mayor cantidad de inscriptos es: %s ",Asignaturas[MayorInscriptos(Inscriptos,NroDeAsignaturas)]);
	
    do
    {
        printf("\nIngrese el nombre de la asignatura que desea buscar: ");
        _flushall();
        gets(PalabraBuscar);
        _flushall();
        
        aux=Buscar(PalabraBuscar,NroDeAsignaturas);

        if(aux<0)
        {
            printf("La Asgnatura no se encuentra, o la escribio de la forma incorrecta.");
        }
        else
        {
            printf("\nLa cantidad de incriptos de la asignatura %s es: %d",Asignaturas[aux],Inscriptos[aux]);
        }

        printf("\n¿Desea buscar otra asignatura? 1=Si, 0=No: ");
        scanf("%d",&Stop);
    
    } while (Stop!=0);

    end();
}

void CargarVectores(int Inscriptos[100],int NroDeAsignaturas)
{
    for (int i = 0; i < NroDeAsignaturas; i++)
    {
        printf("\nIngerese el nombre se la asgnatura %d: ",i+1);
        _flushall();
        gets(Asignaturas[i]);
        _flushall();

        printf("\nIngrese la cantidad de alumanos inscriptos de la asignatura %s: ",Asignaturas[i]);
        scanf("%d",&Inscriptos[i]);

        printf("\n-------------------------------------------------------------\n");
    }
}

int MayorInscriptos(int Inscriptos[100],int NroDeAsignaturas)
{
    int aux=Inscriptos[0],aux2=0;

    for (int i = 0; i < NroDeAsignaturas; i++)
    {
        if (Inscriptos[i]>aux)
        {
            aux=Inscriptos[i];
            aux2=i;
        }
    }
    
    return aux2;
}

int Buscar(char PalabraBuscar[30],int NroDeAsignaturas)
{
    int Aux=-1;

    for (int i = 0; i < NroDeAsignaturas; i++)
    {
        if (strcmp(Asignaturas[i],PalabraBuscar)==0)
        {
            Aux=i;
        }
        
    }

    return Aux;       
}

void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}