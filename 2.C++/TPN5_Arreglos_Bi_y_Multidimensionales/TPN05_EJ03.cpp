#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

//Protipos de funciones:
void end();
void CargarMatriz(int Matriz[100][3],int NroTalleres);
void MostrarMatriz(int Matriz[100][3],int NroTalleres);
int Calcular(int Matriz[100][3],int NroTalleres);

main()
{
    srand(time(0));

	int Matriz[100][3],NroTalleres;

    printf("\nIngrese la cantidad de talleres: ");
    scanf("%d",&NroTalleres);

    CargarMatriz(Matriz,NroTalleres);

    MostrarMatriz(Matriz,NroTalleres);
	
    printf("\nEl taller con la mayor produccion es: %d",Calcular(Matriz,NroTalleres));

	end();
}

void CargarMatriz(int Matriz[100][3],int NroTalleres)
{
    for (int j = 0; j < NroTalleres; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            Matriz[i][j]=1+rand()%1000; //Decidí poner como tope 1000, así lo numero no se hagan muy grandes a la hora de probar el programa.
        }
    }
}

void MostrarMatriz(int Matriz[100][3],int NroTalleres)
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n");

        for (int j = 0; j < NroTalleres; j++)
        {
            printf(" %d",Matriz[i][j]);

            if (j<NroTalleres-1)
            {
                printf(" - ");
            }
        }
    }
}

int Calcular(int Matriz[100][3],int NroTalleres)
{
    int Aux,Produccion=0,Acumulador=0;

    for (int j = 0; j < NroTalleres; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            Acumulador+=Matriz[i][j];
        }
        
       if (Acumulador>Produccion)
       {
           Produccion=Acumulador;
           Aux=j;
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