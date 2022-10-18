#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A[] = {61, 62, 63, 64, 65, 66};

    printf("%d", *(int *)((long *)A + 2));
}