/*  Crear dos archivos de texto con 3 frases cada uno, cuyas frases no superen los 80 caracteres y hacer
una mezcla de los dos en un nuevo archivo, con la condición de que se intercalen las frases. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void grabar_frases(FILE*Fra)
{
   char frase[80];
   for(int i=0;i<3;i++){
      printf("\n Frase N[%d]\n",i+1);
      printf(" ----------\n");
      gets(frase);
      fprintf(Fra,strcat(frase,"\n"));
   }
   fclose(Fra);
   printf("\n\n");
   system("pause");system("cls");
} 

void intercalar_mostrar_frases(FILE*FRA_1,FILE*FRA_2,FILE*FRA_3)
{
   char frase[80];
   FRA_1=fopen("texto1.txt","r");
   FRA_2=fopen("texto2.txt","r");
   for(int i=0;i<3;i++)
   {
      fgets(frase,80,FRA_1);
      printf(" %s",frase);
      fprintf(FRA_3,frase);
      fgets(frase,80,FRA_2);
      printf(" %s",frase);
      fprintf(FRA_3,frase);
   }
   fclose(FRA_1);fclose(FRA_2);fclose(FRA_3);
}
      
main(){
   FILE*TEX_1,*TEX_2,*TEX_3;
   TEX_1=fopen("texto1.txt","w");
   TEX_2=fopen("texto2.txt","w");
   TEX_3=fopen("texto3.txt","w");
   
   if(TEX_1==NULL or TEX_2==NULL || TEX_3==NULL){
      printf("Error al crear el archivo");
      exit(1);
   }
   
   printf("\n\tArchivo N[1]\n");
   printf("\t------------");  
   grabar_frases(TEX_1);
   printf("\n\tArchivo N[2]\n");
   printf("\t------------");
   grabar_frases(TEX_2);
   printf("\n\tArchivo N[3]\n");
   printf("\t------------\n");
   intercalar_mostrar_frases(TEX_1,TEX_2,TEX_3);
   printf("\n\n");
   system("pause");system("cls");
}
