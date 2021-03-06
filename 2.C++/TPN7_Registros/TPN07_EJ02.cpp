#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Estructuras:
struct Punto
{
    float x;
    float y;
};


//Protipos de funciones:


main()
{
	Punto P1,P2;
    int opcion;
    float Distancia,Segmento;
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
                scanf("%f",&P1.x);
                printf("\nY1= ");
                scanf("%f",&P1.y);
                
                printf("\nPunto 2:");
                printf("\nX2= ");
                scanf("%f",&P2.x);
                printf("\nY2= ");
                scanf("%f",&P2.y);
                break;
            
            case 2:
                if (stop)
                {
                    printf("\nPares ordenados");
                    printf("\nP1(%.2f,%.2f)",P1.x,P1.y);
                    printf("\nP2(%.2f,%.2f)",P2.x,P2.y);
                }
                else
                {
                    printf("\nNo cargo los puntos.");
                }
                break;
            
            case 3:
                if (stop)
                {
                    Distancia=sqrt((P1.x*P1.x)+(P1.y*P1.y));
                    printf("\nLa distancia del origen al punto 1 es: %.2f",Distancia);
                }
                else
                {
                    printf("\nNo cargo los puntos.");
                }
                break;
            
            case 4:
                if (stop)
                {
                    Segmento=sqrt(pow((P2.x-P1.x),2)+pow((P2.y-P1.y),2));
                    printf("\nLa longitud del segmento entre ambos puntos es: %.2f",Segmento);
                }
                else
                {
                    printf("\nNo cargo los puntos.");
                }
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
    while (opcion!=5);
}

