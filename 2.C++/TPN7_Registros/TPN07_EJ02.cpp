#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Estructuras:
struct Punto
{
    int x;
    int y;
};


//Protipos de funciones:


main()
{
	Punto P1,P2;
    int opcion;
    bool stop=false;

    do
    {
        system("cls");
        printf("\n\tCalculos con puntos en el plano.");
        printf("\n\n1. Cargar puntos.");
        printf("\n\n2. Mostrar los puntos en forma de par ordenado.");
        printf("\n\n3. Distancia del Punto 1 al origen.");
        printf("\n\n4. Longitud del segmento entre ambos puntos");
        printf("\n\n5. Salir");
        printf("\n\nIngrese la opcion: ");
        scanf("%d",&opcion);
    
        switch(opcion)
        {
            case 1:
                stop=true;
                printf("\nCargue los puntos: ");
                
                printf("\nPunto 1:");
                printf("\nX1= ");
                scanf("%d",&P1.x);
                printf("\nY1= ");
                scanf("%d",&P1.y);
                
                printf("\nPunto 2:");
                printf("\nX1= ");
                scanf("%d",&P1.x);
                printf("\nY1= ");
                scanf("%d",&P1.y);

                system("pause");
                break;
            
            case 2:
                if (stop)
                {
                    printf("\nPares ordenados");
                    printf("\nP1(%d,%d)",P1.x,P1.y);
                    printf("\nP2(%d,%d)",P2.x,P2.y);
                }
                else
                {
                    printf("\nNo cargo los puntos.");
                }

                system("pause");
                break;
            
            case 3:
                
                break;
            
            case 4:

                break;
            
            case 5:
                printf("\nGracias por utilizar nuestros servicios.");
                break;

            default:
                printf("\nIngreso una opcion incorrecta, volvera al menu.");
                break;
        }

        printf("\n\n");
        system("pause");
    } 
    while (opcion!=4);
}

void CargarPuntos(Punto &P1,Punto &P2)
{

}
