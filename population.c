#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size, end_size, n = 0;
    //TODO: Prompt for start size
    do
    {
        start_size = get_int("START SIZE: ");
    }
    while (start_size < 9);

    //TODO: Prompt for end size
    do
    {
        end_size = get_int("END SIZE: ");
    }
    while (end_size < start_size && end_size != start_size);

    //TODO: Calculate number of years until reach threshold
    do
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        n++;
    }
    while (start_size < end_size);

    //TODO: Print number of years
    printf("Years: %i\n", n);
    printf("");
}
