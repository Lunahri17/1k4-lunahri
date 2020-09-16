#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

//Protipos de funciones:
void end();


main()
{
    srand(time(0));

	int Matriz[100][3],NroTalleres;

    printf("\nIngrese la cantidad de talleres: ");
    scanf("%d",&NroTalleres);

    CargarMatriz(Matriz,NroTalleres);
	
	end();
}

void CargarMatriz(int Matriz[100][3],int NroTalleres)
{
    for (int j = 0; j < NroTalleres; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            Matriz[i][j]=1+rand%1000; //Decidí poner como tope 1000, así lo numero no se hagan muy grandes a la hora de probar el programa.
        }
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