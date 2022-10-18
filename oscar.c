#include <stdio.h>

int main()
{
    int x[5] = {65, 66, 67, 64, 75};
    int y[5];
    char c[5];
    FILE *fptr;

    fptr = fopen("newfile.txt", "r+");
    fwrite(x, sizeof x, 1, fptr);
    rewind(fptr);
    fread(y, sizeof y, 1, fptr);

    fread(c, sizeof y, 1, fptr);

    fclose(fptr);
    printf("int: %lu, char: %lu\n", sizeof(int), sizeof(char));
    for (int i = 0; i < sizeof y / sizeof y[0]; i++)
    {
        printf("%d ", y[i]);
    }
    return (0);
}