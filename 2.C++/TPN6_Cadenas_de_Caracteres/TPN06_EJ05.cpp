#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void IngresarDatos(int &CantNombres);
void Decreciente(int CantNombres);

//Variables Globales:
typedef char cadena[50];
cadena Personas[50];

main()
{
	int opcion,CantNombres=0;

    do
    {
        system("cls");
        printf("\n\tBienvenido a tu negocio.");
        printf("\n\n1. Ingresar datos de socios.");
        printf("\n\n2. Ordenar los nombres de manera decreciente.");
        printf("\n\n3. Mostrar el listado de personas.");
        printf("\n\n4. Ordenar los nombres de manera creciente.");
        printf("\n\n5. Buscar un apellido en la lista.");
        printf("\n\n6. Salir.");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                IngresarDatos(CantNombres);
                break;
            
            case 2:
                system("cls");
                Decreciente(CantNombres);
                printf("\nEl ordenamiento se realizo con exito.");
                system("pause");
                break;

            case 3:
                system("cls");
                Mostrar(CantNombres);
                printf("\n\n");
	            system("pause");
                break;

            case 4:
                system("cls");

                break;

            case 5:
                system("cls");

                break;

            case 6:
                end();
                break;

            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.\n");
                system("pause");
                break;
        }

    } while (opcion!=6);
}

void IngresarDatos(int &CantNombres)
{
    char Final[] = "FINAL";
    bool stop=false;

    do
    {
        printf("Ingrese el Apellido y Nombre del socio (Ingrese final para terminar): ");
        _flushall();
        gets(Personas[CantNombres]);
        strupr(Personas[CantNombres]);

        if (strcmp(Personas[CantNombres],Final)!=0)
        {
            CantNombres++;
        }
        else
        {
            stop=true;
        }

    } while (stop==false);

}

void Decreciente(int CantNombres)
{
    bool stop;
    char aux[100];

    do
    {
        stop=false;
        
        for (int i=0 ; i < CantNombres-1 ; i++)
        {
            if(strcmp(Personas[i],Personas[i+1])<0) // > "A" a "Z" / < "Z" a "A".
            {
                strcpy(aux,Personas[i]);
                strcpy(Personas[i],Personas[i+1]);
                strcpy(Personas[i+1],aux);
                stop=true;
            }
        }         
    }
    while (stop);
}

void Mostrar(int CantNombres)
{
    for (int i=0 ; i < CantNombres ; i++)
     {
         printf("Socio %d: %s\n",i+1,Personas[i]);
     }    
}

void end()
{
	printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}