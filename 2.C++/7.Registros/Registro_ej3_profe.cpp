#include<stdio.h>

 #include<stdlib.h>

 #include<string.h>



struct fecha

 {

 int dia,mes,anio;

 };



struct producto

 {

 int codigo;

 char descripcion[25];

 float precio[3];

 fecha fecha_ven;

 char comentario[200];

 char rubro;

 };



void cargar(producto prod[50],int N);

 void mostrar(producto prod[50],int N);





 main()

 {

 int cant;



producto SUC1[50];

 printf("\nIngrese la cantidad de elementos: ");

 scanf("%d",&cant);

 cargar(SUC1,cant);

 mostrar(SUC1,cant);



printf("\n\n");

 system("pause");

 }



void cargar(producto prod[50],int N)

 {

 int i,j;

 for(i=0;i<N;i++)

 {

 printf("\nCODIGO: ");

 scanf("%d",&prod[i].codigo);

 _flushall();

 printf("\nDESCRIPCION: ");

 gets(prod[i].descripcion);

 printf("\nCARGRE LOS 3 PRECIOS DEL SEMESTRE: ");

 for(j=0;j<3;j++)

 {

 printf("\nPrecio %d: ",j+1);

 scanf("%f",&prod[i].precio[j]);

 }

 printf("\nFECHA DE VENCIMIENTO: \n");

 printf("\nDIA: ");

 scanf("%d",&prod[i].fecha_ven.dia);

 printf("\nMES: ");

 scanf("%d",&prod[i].fecha_ven.mes);

 printf("\nANIO: ");

 scanf("%d",&prod[i].fecha_ven.anio);

 _flushall();

 printf("\nOBSERVACIONES: ");

 gets(prod[i].comentario);

 printf("RUBRO L=Lacteos - P=Panaderia: ");

 scanf("%c",&prod[i].rubro);

 }

 }



void mostrar(producto prod[50],int N)

 {

 int i,j;

 float suma,prom;

 printf("\nLISTADO DE PRODUCTOS\n");

 for(i=0;i<N;i++)

 {

 suma=0;

 printf("\n");

 printf("\nCODIGO: %d",prod[i].codigo);

 printf("\nDESCRIPCION: %s",strupr(prod[i].descripcion));

 printf("\nPRECIOS DEL SEMESTRE\n");

 for(j=0;j<3;j++)

 {

 printf("\nPrecio %d: %.2f",j+1,prod[i].precio[j]);

 suma=suma+prod[i].precio[j];

 }

 prom=(float)suma/3;

 printf("\nFECHA DE VENCIMIENTO");

 printf("\nDIA: %d",prod[i].fecha_ven.dia);

 printf("\nMES: %d",prod[i].fecha_ven.mes);

 printf("\nANIO: %d",prod[i].fecha_ven.anio);

 printf("\nOBSERVACIONES: ");

 puts(prod[i].comentario);

 printf("RUBRO: %c",prod[i].rubro);

 printf("\nPromedio del Precio del Producto: %.2f",prom);



}

 }