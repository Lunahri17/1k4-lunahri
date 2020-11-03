#include <stdio.h>
#include <conio.h>

main()
{
    FILE *fp1;
    char palabra[100];
    fp1 = fopen("nombres.txt", "r");
    while (!feof(fp1)) /* Se repite hasta encontrar fEOF */
    {
        
            fscanf(fp1, "%s", palabra);
            /* Obtiene una palabra del archivo */
            printf("%s\n",palabra ); /* la despliega en pantalla */
    }
    
    fclose(fp1);


}
