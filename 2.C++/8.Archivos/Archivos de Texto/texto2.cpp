#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    FILE *final;
    final = fopen("nombres.txt", "a"); /* Abrir archivo para concatenar */
    if (final == NULL)
    {
        printf("Falla al abrir el archivo \n");
        exit (EXIT_FAILURE);
    }
    putc('M', final);
    putc('A', final);
    putc('R', final);
    putc('I', final);
    putc('A', final);
 
    fclose(final);
}
