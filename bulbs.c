#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: "); //Getting message from User

    for (int i = 0; i < strlen(message); i++) //for loop to run characters. i is set to = 0
    {
        unsigned char byte = message[i]; //this byte will store the ASCII vale for the first letter, 'H' = 72

        int binary[BITS_IN_BYTE]; //this process creates the binary element of 8, typically an array assigns random numbers initially

        int quotient = byte; //this variable contains the same value as byte

        int remainder;

        for (int j = 0; j < BITS_IN_BYTE; j++) //
        {
            remainder = quotient % 2;

            binary[j] = remainder;

            quotient /= 2;
        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
