#include <stdio.h>
#define MAX_COLUMNS 10

void convertToDecimal(char *filename)
{
    FILE *fp = fopen(filename, "r");
    int rows, columns;
    fscanf(fp, "%d%d", &rows, &columns);
    int digit, sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = columns; j > 0; j--)
        {
            fscanf(fp, "%d", &digit);
            sum += digit << (j - 1);
        }
        printf("%d\n", sum);
    }
    fclose(fp);
}

int main(int argc, char *argv[])
{
    // convertToDecimal(argv[1]);
    convertToDecimal("./numbers.txt");
    return 0;
}