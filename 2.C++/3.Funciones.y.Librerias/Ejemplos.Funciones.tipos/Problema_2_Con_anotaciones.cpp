#include<stdio.h>

bool cuadrado(float x1, float y1);

main()
{
	float x,y;
	int c,n;
	
	printf("Ingresar N: ");
	scanf("%d",&n);
	
	for(c=0;c<n;c++)
	{
		printf("\nIngresar el valor de X: ");
		scanf("%f",&x);
		printf("Ingresar el valor de Y: ");
		scanf("%f",&y);
		
		if(cuadrado(x,y)==true) //No es necesario colocar el "==true" porque ya esta el true del boole
		{
			printf("\nEsta dentro del cuadrado\n");
		}
		else
		{
			printf("\nEsta fuera del cuadrado\n");
		}
	}

}


//CON TUIPO -> Comienza con el tipo de valor que devuelve
//Al final tiene un retrun valor;
//La variable que devuelve debe ser declarada dentro de la función
bool cuadrado(float x1, float y1)
{
	bool esta=false;
	
	if(x1>=-3 and x1<3 and y1>=-3 and y1<=3)
	{
		esta=true;
	}
	return esta;
}
