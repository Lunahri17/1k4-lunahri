#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();


main()
{
	int Matriz[100][100],Filas,Columnas;
    
    printf("\nCargue la matriz: ")

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d",&Filas);

    printf("\nIngrese la cantidad de Columnas: ");
    scanf("%d",&Columnas);

    CargarMatriz(Matriz,Filas,Columnas);
	
	end();
}

void CargarMatriz(int Matriz,int Filas,int Columnas)
{
    for (int j = 0; j < Columans; j++)
    {
        for (int i = 0; i < Filas; i++)
        {
            printf("\nMatriz[%d][%d]= ",i,j);
            scanf("%d",&Matriz[i][j]);
            if (Matriz[i][j]<1)
            {
                printf("\n\n\tERROR: Se ingreso un numeor que es meno, o igual, a 0. Porfavor vuelva a ingrsarlo\n");
                i--;
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