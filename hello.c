#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string fname = get_string("What's your first name?\n");
    printf("Hello, %s!\n", fname);
}