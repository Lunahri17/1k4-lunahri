#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarArreglo(int Arreglo[2][4][3]);

main()
{
	int Arreglo[2][4][3];

    CargarArreglo(Arreglo);
	
	end();
}

void CargarArreglo(int Arreglo[2][4][3])
{
    for (int k = 0; k < 4; k++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("\nArreglo[%d][%d][%d]= ",i,j,k);
                scanf("%f",&Arreglo[i][j][k]);
            }
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