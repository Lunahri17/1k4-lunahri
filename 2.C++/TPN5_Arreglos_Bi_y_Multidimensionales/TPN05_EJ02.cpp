#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Protipos de funciones:
void end();
void CargarMatriz(int Matriz[100][100],int Filas,int Columnas);
void MostrarMatriz(int Matriz[100][100],int Filas,int Columnas);

main()
{
	int Matriz[100][100],Filas,Columnas,CambiarFila,CambiarColumna;
    
    printf("\nCargue la matriz: ");

    printf("\nIngrese la cantidad de filas: ");
    scanf("%d",&Filas);

    printf("\nIngrese la cantidad de Columnas: ");
    scanf("%d",&Columnas);

    CargarMatriz(Matriz,Filas,Columnas);

    printf("\n\nLa matriz ingresada es: \n");
    MostrarMatriz(Matriz,Filas,Columnas);
	
    
    printf("\n\nIngrese la posicion en la que desea cambiar el numero por cero:");
    
    printf("\n\nFila: ");
    scanf("%d",&CambiarFila);

    printf("Columna: ");
    scanf("%d",&CambiarColumna);

    Matriz[CambiarFila-1][CambiarColumna-1]=0;

    printf("\n\nLa nueva matriz es: \n");
    MostrarMatriz(Matriz,Filas,Columnas);

	end();
}

void CargarMatriz(int Matriz[100][100],int Filas,int Columnas)
{
    for (int j = 0; j < Columnas; j++)
    {
        for (int i = 0; i < Filas; i++)
        {
            printf("\nMatriz[%d][%d]= ",i,j);
            scanf("%d",&Matriz[i][j]);
            if (Matriz[i][j]<1)
            {
                printf("\n\n\tERROR: Se ingreso un numero menor, o igual, a 0. Porfavor vuelva a ingrsarlo\n");
                i--;
            }          
        }        
    }    
}

void MostrarMatriz(int Matriz[100][100],int Filas,int Columnas)
{
    for (int i = 0; i < Filas; i++)
    {
        printf("\n\n\t");

        for (int j = 0; j < Columnas; j++)
        {
            printf("%d",Matriz[i][j]);

            if (j<Columnas-1)
            {
                printf(" - ");
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