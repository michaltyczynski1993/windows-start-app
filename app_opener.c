#include <stdio.h>
#include <windows.h>

#define MAX_LINE_LENGTH 1000
int main()
{

    FILE *textfile;
    char line[MAX_LINE_LENGTH];

    textfile = fopen("data.txt", "r");
    if (textfile == NULL)
        return 1;

    while (fgets(line, MAX_LINE_LENGTH, textfile))
    {
        system(line);
        printf(line);
    }

    fclose(textfile);
    return 0;
}