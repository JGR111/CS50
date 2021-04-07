#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int pop;
    do
    {
        pop = get_int("Starting population: ");
        if (pop < 9)
        {
            printf("\nPopulation should be greater than 8...\n\n");
        }
    }
    while (pop < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("Ending population: ");
    }
    while (end < pop);

    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    while (end > pop)
    {
        int born = pop / 3;
        int died = pop / 4;
        pop = pop + born - died;
        y++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", y);
}
