#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void cargar_estudiantes(FILE *arch);
void listar_estudiantes(FILE *arch);
void buscar_estudiante(FILE *arch);
void removerCaracteres(char *cadena, char *caracteres);

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
	char aux[50],aux2[50],estudiante[150];
	int pos;
	bool esta=false;

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
			esta=true;
			break;
		}
		fgets(estudiante,150,arch);
	}

	printf("\nvariable estudiante: %s",estudiante); //quitar, solo caso de prueba.

	if (esta)
	{
		removerCaracteres(estudiante,aux2);
		printf("\nvariable estudiante: %s",estudiante); //quitar, solo caso de prueba.
	}
	

	fclose(arch);
}

void removerCaracteres(char *cadena, char *caracteres)
{
	int indiceCadena = 0, indiceCadenaLimpia = 0;
	int deberiaAgregarCaracter = 1;
	
	// Recorrer cadena carácter por carácter
	while (cadena[indiceCadena]) 
	{
		// Primero suponemos que la letra sí debe permanecer
		deberiaAgregarCaracter = 1;
		
		int indiceCaracteres = 0;
		
		// Recorrer los caracteres prohibidos
		
		while (caracteres[indiceCaracteres]) 
		{
			// Y si la letra actual es uno de los caracteres, ya no se agrega
			if (cadena[indiceCadena] == caracteres[indiceCaracteres]) 
			{
				deberiaAgregarCaracter = 0;
			}

			indiceCaracteres++;
		}

		// Dependiendo de la variable de arriba, la letra se agrega a la "nueva
		// cadena"
		if (deberiaAgregarCaracter) 
		{
			cadena[indiceCadenaLimpia] = cadena[indiceCadena];
			indiceCadenaLimpia++;
		}

		indiceCadena++;
	}
	
	// Al final se agrega el carácter NULL para terminar la cadena
	cadena[indiceCadenaLimpia] = 0;
}


void end()
{
	printf("\n\n");
	system("pause");
    printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}