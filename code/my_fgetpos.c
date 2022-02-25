#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("file.txt", "a");
    if (fp != NULL)
    {
        fpos_t pos;
        fgetpos(fp, &pos);
        printf("%lld", pos);
    }

    return 0;
}