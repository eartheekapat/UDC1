#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if (fp != NULL)
        fputs("Hello how are you", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("%s", str1);
    printf("%s", str2);
    printf("%s", str3);
    printf("%d", year);

    fclose(fp);

    return (0);
}