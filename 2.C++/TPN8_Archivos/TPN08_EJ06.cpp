#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Estructuras:
struct listar
{
	char nombre[80];
	char apellido[80];
	char carrera[80];
	char promedio[10];
};

//Protipos de funciones:
void end();
int cargar_estudiantes(FILE *arch,listar reg[50]);
void listar_estudiantes(listar reg[50],int n);
void buscar_estudiante(listar reg[50],int n);

main()
{
	FILE *arch;
	listar reg[50];
	int n=0;

	n=cargar_estudiantes(arch,reg);
	system("pause");

	system("cls");
	printf("\nListador de estudiantes: \n\n");
	listar_estudiantes(reg,n);
	

	buscar_estudiante(reg,n);
	end();
}

//Apartado 1.
int cargar_estudiantes(FILE *arch,listar reg[50])
{
	int n;
	char estudiante[150],aux[40];

	arch=fopen("Estudiantes.txt","w");

	printf("\nIngrese la cantidad de estudiantes: ");
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		printf("\nIngrese el Nombre del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strupr(aux);
		strcpy(reg[i].nombre,aux);
		strcpy(estudiante,reg[i].nombre);
		strcat(estudiante," ; ");

		printf("\nIngrese el Apellido del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strupr(aux);
		strcpy(reg[i].apellido,aux);
		strcat(estudiante,reg[i].apellido);
		strcat(estudiante," ; ");

		printf("\nIngrese la Carrera del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strupr(aux);
		strcpy(reg[i].carrera,aux);
		strcat(estudiante,reg[i].carrera);
		strcat(estudiante," ; ");
		
		printf("\nIngrese el promedio del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strupr(aux);
		strcpy(reg[i].promedio,aux);
		strcat(estudiante,reg[i].promedio);
		strcat(estudiante," ;");

		fprintf(arch,strcat(estudiante,"\n"));
		
		printf("\n\n----------------------------------------------------------------\n\n");
	}

	fclose(arch);
	return n;
}

//Apartado 2.
void listar_estudiantes(listar reg[50],int n)
{
	printf("-----------------------------------------------------------------------------\n");
	for (int i=0 ; i < n ; i++)
	{
		printf("\nNombre del alumno %d: ",i+1);
		puts(reg[i].nombre);

		printf("\nApellido del alumno %d: ",i+1);
		puts(reg[i].apellido);

		printf("\nCarrera del alumno %d: ",i+1);
		puts(reg[i].carrera);

		printf("\nPromedio del alumno %d: ",i+1);
		puts(reg[i].promedio);

		printf("-----------------------------------------------------------------------------\n");
	}
}

//Apartado 3.
//No supe como implementarlo.

//Apartado 4.
//No supe como implementarlo.

//Apartado 5.
void buscar_estudiante(listar reg[50],int n)
{
	char aux1[50],aux2[50];
	bool esta=false;

	printf("\nIngrese el Nombre del alumno: ");
	_flushall();
	gets(aux1);
	strupr(aux1);

	printf("\nIngrese el Apellido del alumno: ");
	_flushall();
	gets(aux2);
	strupr(aux2);
		
	for (int i = 0; i < n; i++)
	{
		if (strcmp(reg[i].nombre,aux1)==0)
		{
			if (strcmp(reg[i].apellido,aux2)==0)
			{
				esta=true;
				
				printf("\nDatos del estudiante: ")

				printf("\nCarrera que estudia: ");
				puts(reg[i].carrera);

				printf("\nPromedio del estudiante: ");
				puts(reg[i].promedio);

				break;
			}
		}
	}
	
	if (!esta)
	{
		printf("\nEl Nombre y Apellido ingresados no coinciden.");
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