#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("file.txt", "a");
    if (fp != NULL)
        printf("%ld", ftell(fp));

    return 0;
}