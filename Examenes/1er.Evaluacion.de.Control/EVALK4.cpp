//Moreno Ivanoff Jeremias 1K4
#include<stdio.h> //Aqui en ambas librerías no estan bien declaradas, ya que les falta la extención del archivo; que sería ".h".
#include<stdlib.h>

main()
{
	int N,c=0,x,digi3; //Aqui decalro la variable "digi3" que no estaba declarada.
					   //Aqui falta inicializar en cero el contador para que pueda funcionar el while.
	printf("\nIngrese la cantidad de numeros: ");
	scanf("%d",&N);
	
	while(c<N)
	{
		printf("\nIngrese el nro: ");
		scanf("%d",&x); //Aqui falta el ampersand para introducir la variable.
		
		if(x>99 and x<1000) //La operacion logica debería ser "and" para indicar que debe estar entre los dos parametros.
		{
			digi3=x%10; //Aquí hay dos errores, uno es que no esta declarada la variable "digi3", y el otro es que el operando "mod", en C++ se expresa como "%".
			printf("\nEl ultimo digito es: %d\n",digi3); //Aqui le agrege al final un "\n" solo para que no se junto el texto en la consola.
			c++;
		}
		else
		{
			printf("\nEl numero ingresado no es de 3 digitos, ingrese de nuevo.\n");
			system("pause");
		}
	}
 	
	printf("\n\n");
 	system("pause");
}
