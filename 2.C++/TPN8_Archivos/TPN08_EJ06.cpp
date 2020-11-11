#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void cargar_estudiantes(FILE *arch);
void listar_estudiantes(FILE *arch);
void buscar_estudiante(FILE *arch);

main()
{
	FILE *arch;
	
	cargar_estudiantes(arch);
	system("pause");

	system("cls");
	printf("\nListador de estudiantes: \n\n");
	listar_estudiantes(arch);
	

	buscar_estudiante(arch);
	end();
}

void cargar_estudiantes(FILE *arch)
{
	int n;
	char estudiante[150],aux[40];

	arch=fopen("Estudiantes.txt","a"); //cambiar por "w", solo es para caso de prueba.

	printf("\nIngrese la cantidad de estudiantes: ");
	scanf("%d",&n);

	for (int i = 0; i < n; i++)
	{
		printf("\nIngrese el Apellido del estudiante %d: ",i+1);
		_flushall();
		gets(estudiante);
		strcat(estudiante,";");

		printf("\nIngrese el Nombre del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,";");

		printf("\nIngrese la Carrera del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,";");
		
		printf("\nIngrese el promedio del estudiante %d: ",i+1);
		_flushall();
		gets(aux);
		strcat(estudiante,aux);
		strcat(estudiante,";");

		strupr(estudiante);
		fprintf(arch,strcat(estudiante,"\n"));
		
		printf("\n\n----------------------------------------------------------------\n\n");
	}

	fclose(arch);
}

void listar_estudiantes(FILE *arch)
{
	char estudiante[150];

	arch=fopen("Estudiantes.txt","r");

	printf("-----------------------------------------------------------------------------\n");
	fgets(estudiante,150,arch);
	while (!feof(arch))
	{
		printf("%s",estudiante);
		printf("-----------------------------------------------------------------------------\n");
		fgets(estudiante,150,arch);
	}
	fclose(arch);
}





void buscar_estudiante(FILE *arch)
{
	char aux[50],aux2[50],aux3,estudiante[150],carrera[20];
	int pos,i=0,k=0,cont1=0;
	bool stop=false;

	arch=fopen("Estudiantes.txt","r");

	printf("\nIngrse el apellido del estudiante: ");
	_flushall();
	gets(aux2);
	strcat(aux2,";");

	printf("\nIngrse el nombre del estudiante: ");
	_flushall();
	gets(aux);
	strcat(aux2,aux);
	strcat(aux2,";");

	strupr(aux2);
	
	fgets(estudiante,150,arch);
	while (!feof(arch))
	{
		pos=strstr(estudiante,aux2)-estudiante;
		if (pos>=0) 
		{
			stop=true;
			break;
		}
		fgets(estudiante,150,arch);
	}

	printf("\nvariable estudiante antes: %s",estudiante); //quitar, solo caso de prueba.

	if (stop)
	{
		stop=false;
		while (!stop) //Este wihle recorre la variable estudiante hasta que encuentre la carrera y el promedio, ubicandolos en un nuevo vector.
		{
			if (cont1==4)
			{
				stop=true;
			}
			else
			{
				aux3=estudiante[i];

				if (cont1>2 and cont1<3)
				{
					carrera[k]=aux3;
					k++;
					printf("\nCarrera: %s",carrera);
				}

				if (aux3==59)
				{
					cont1++;
				}

				i++;
			}
		}
		
		printf("\nCarrera: %s",carrera);
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