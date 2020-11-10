#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();

main()
{
	FILE *arch;
	
	cargar_estudiantes(arch);
	
	end();
}

void cargar_estudiantes(arch)
{
	int n;
	char estudiante[150],aux[40];

	arch=fopen("Estudiantes.txt","w");

	printf("\nIngrese la cantidad de estudiantes: ");
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		printf("\nIngrese el Apellido del estudiante %d: ",i+1);
		_flushall();
		gets(estudiante);
		strcat(estudiante,';');

		printf("\nIngrese el Nombre del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,';');

		printf("\nIngrese la Carrera del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,';');
		
		printf("\nIngrese el promedio del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,';');

		fprintf(arch,strcat(estudiante,"\n"));
	}

	fclose(arch);
}


void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}