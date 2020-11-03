//ORDENAMIENTO



/*Ordena los resgistros del archivo empleados.dat por el campo legajo*/



#include <conio.h>

 #include <stdio.h>

 #include <stdlib.h>



struct registro

 {​​​​

 int legajo,edad;

 char apeynom[30];

 float sueldo;

 bool borrado;

 }​​​​;



main (void)

 {​​​​

 registro reg,v[100],aux;

 FILE *arch;

 int b,i,n;


 printf("ORDENA LOS DATOS DEL ARCHIVO\n\n");


 printf("1. Pasa los registros a un array\n");

 arch=fopen("empleados.dat","rb");


 fread(&reg,sizeof(registro),1,arch);

 i=0;


 while(feof(arch)==0)

 {​​​​

 v[i]=reg;

 i++;

 fread(&reg,sizeof(registro),1,arch);

 }​​​​

 n=i;


 printf("2. Ordena los registros del array\n");

 do

 {​​​​

 b=0;

 for (i=0;i<n-1;i++)

 {​​​​

 if (v[i].legajo>v[i+1].legajo)

 {​​​​

 aux=v[i];

 v[i]=v[i+1];

 v[i+1]=aux;

 b=1;

 }​​​​

 }​​​​

 }​​​​

 while (b==1);


 fclose(arch);


 printf("3. Pasa los registros del array al archivo\n");

 arch=fopen("empleado.dat","wb");

 for (i=0;i<n;i++)

 {​​​​

 reg=v[i];

 fwrite(&reg,sizeof(registro),1,arch);

 }​​​​

 system("pause");

 fclose(arch);


 system("CLS");

 printf("\n\nRegistros ordenados por legajo\n\n");

 arch=fopen("empleado.dat","rb");

 fread(&reg,sizeof(registro),1,arch);

 while(!feof(arch))

 {​​​​

 if (reg.borrado==false)

 {​​​​

 printf("Legajo: %d\n",reg.legajo);

 printf("Apellido y Nombre: %s\n",reg.apeynom);

 printf("Sueldo: %.2f\n",reg.sueldo);

 printf("Edad: %d\n\n",reg.edad);

 }​​​​

 fread(&reg,sizeof(registro),1,arch);

 }​​​​

 fclose(arch);

 system("pause");

 }​​​​