#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(sizeof("Hello"));
    sscanf("Hello_World_!", "%s", str);
    printf("%s %lu", str, sizeof str);

    return 0;
}