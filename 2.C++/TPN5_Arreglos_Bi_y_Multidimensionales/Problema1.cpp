#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void IngresarElementos(float Matriz[10][10]);

//Variables globales:


main()
{
	float Matriz[10][10];

    IngresarElemnetos(Matriz);
	
	end();
}

void IngresarElementos(float Matriz[10][10])
{
    printf("\n Ingrese los elementos de la Matriz 4x3:");

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("\nMatriz[%d][%d]= ",i,j);
            scanf("%f",&Matriz[i][j]);
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