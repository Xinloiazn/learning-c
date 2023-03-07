#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int born = 3;
    int die = 4;

    //Prompt for Start Size of Population
    int startsize;
    do
    {
        startsize = get_int("Start Size Population: ");
    }
    while (startsize < 9);

    //Prompt for End Size of Population
    int endsize;
    do
    {
        endsize = get_int("End Size Population: ");
    }
    while (endsize < startsize);

    // Calculate number of years until we reach threshhold
    int years = 0;

    //Print number of years
    while (endsize > startsize)
    {
        startsize = startsize + (startsize/born) - (startsize/die);
        years++;
    }
    printf("Years: %i\n", years);

}