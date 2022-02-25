#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_read = fopen("file.txt", "r");
    FILE *fp_write = fopen("write.txt", "w");
    // if (fp_read == NULL || fp_write == NULL)
    //     return -1;

    char c;

    fseek(fp_read, 0, SEEK_END);
    int pos = ftell(fp_read);

    for (int i = pos; i >= 0; i--)
    {
        fseek(fp_read, i - 1, SEEK_SET);
        c = getc(fp_read);
        printf("%c", c);
        fputc(c, fp_write);
    }

    fclose(fp_read);
    fclose(fp_write);
    fp_read = NULL;
    fp_write = NULL;

    return 0;
}