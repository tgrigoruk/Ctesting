#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        puts("No arguments given.");
        return 0;
    }
    int i;
    for (i = 1; i < argc + 1; i++)
    {
        if (argv[i][0] == '-') // flag
        {
        }
        else
        {
            printf("%s", argv[i]);
            printf(" starts with a %s\n", isdigit(argv[i][0]) ? "digit" : "non-digit");
        }
    }

    return 0;
}