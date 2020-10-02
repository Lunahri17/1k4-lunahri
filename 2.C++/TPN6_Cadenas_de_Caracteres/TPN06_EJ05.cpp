#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Protipos de funciones:
void end();
void IngresarDatos(int &CantNombres);
void Decreciente(int CantNombres);
void Mostrar(int CantNombres);
void Creciente(int CantNombres);
void Buscar(int CantNombres,char SocioBuscar[50]);

//Variables Globales:
typedef char cadena[50];
cadena Personas[50];

main()
{
	int opcion,CantNombres=0;
    char SocioBuscar[50];

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
                Creciente(CantNombres);
                printf("\nEl ordenamiento se realizo con exito.");
                system("pause");
                break;

            case 5:
                system("cls");
                printf("\nIngrese el apellido del socio que desea buscar: ");
                gets(SocioBuscar);
                strupr(SocioBuscar);
                Buscar(CantNombres,SocioBuscar);
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

void Mostrar(int CantNombres)
{
    for (int i=0 ; i < CantNombres ; i++)
     {
         printf("Socio %d: %s\n",i+1,Personas[i]);
     }    
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
            if(strcmp(Personas[i],Personas[i+1])<0)
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

void Creciente(int CantNombres)
{
    bool stop;
    char aux[100];

    do
    {
        stop=false;
        
        for (int i=0 ; i < CantNombres-1 ; i++)
        {
            if(strcmp(Personas[i],Personas[i+1])>0)
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

void Buscar(int CantNombres,char SocioBuscar[50])
{
    bool Esta=false;
    int Contador=0;

    for (int i = 0; i < CantNombres; i++)
    {
        if (strcmp(Personas[i],SocioBuscar)==0)
        {
            Esta=true;
            Contador++;
        }
    }

    if (Esta)
    {
        if (Contador==1)
        {
            printf("\nEl socio buscado si se encuentra en la lista.");
        }
        else
        {
            printf("\nEl socio buscado aparece en la lista %d veces.",Contador);
        }
    }
    else
    {
        printf("\nEl socio buscado no aparece en la lista.");
    }    
}

void end()
{
	printf("\n\tGracias por utilizar el programa.");
 	printf("\n\n");
	system("pause");
}