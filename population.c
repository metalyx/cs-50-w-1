#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float population_start = 0;

    while (population_start < 9)
    {
        population_start = get_int("Start size: ");
    }

    float population_end = 0;

    while (population_end < population_start)
    {
        population_end = get_int("End size: ");
    }

    int years = 0;

    while ((int)population_start < (int)population_end)
    {
        float born = population_start / 3;
        born = (int)born;

        float dead = population_start / 4;
        dead = (int)dead;

        population_start += (born - dead);
        years++;
    }

    printf("Years: %i\n", years);
}
