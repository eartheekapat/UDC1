#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_read = fopen("file.txt", "r");
    FILE *fp_write = fopen("write.txt", "w+");
    if (fp_read == NULL || fp_write == NULL)
    {
        perror("Bruh");
        return -1;
    }

    char c;

    while ((c = fgetc(fp_read)) != EOF)
    {
        if (c <= 'z' && c >= 'a')
            // this means c is btw a and z
            fputc(c - 32, fp_write);
        else
            fputc(c, fp_write);
    }

    fclose(fp_read);
    fclose(fp_write);
    fp_read = NULL;
    fp_write = NULL;

    return 0;
}