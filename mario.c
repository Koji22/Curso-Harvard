#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, hashes, blank, i;

    //TODO: Prompt for imput
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //TODO: Printing
    for (i = 0; i < height; i++)
    {
        for (blank = 0; blank < height - i - 1; blank++)
        {
            printf(" ");
        }
        for (hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}