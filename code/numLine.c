#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist.\n");
        return -1;
    }

    char c;
    int count = 1;

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
            count++;
    }

    fclose(fp);
    fp = NULL;

    printf("%d", count);

    return 0;
}
