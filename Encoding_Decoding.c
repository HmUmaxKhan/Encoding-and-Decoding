#include <stdio.h> //Encoding and Decoding

int main()
{

    // Initialize the Variables
    int o, i = 0, count = 1, r = 0, l = 0, m = 0;
    // Initialize the array
    char str[50];
    // Using for loop to make character array as null array
    for (int x = 0; x < 50; x++)
        str[x] = ' ';

    printf("To Encode Message: ENTER 1\n   To Decode Message: ENTER 2\n ");

    // Enter the input from the user to choose encoding or decoding
    scanf("%d", &o);

    switch (o)
    {
    case 1: // This is for encoding
        printf("Enter the string with number\n");

        // Input string from the user in the form of array
        scanf("%s", &str);

        // Using while loop for encoding
        while (str[i + 1] != ' ')
        {
            if (str[i] == str[i + 1])
            {
                count++;
            }
            else
            {
                printf("%c%d", str[i], count);
                count = 1;
            }
            i++;
        }
        break;

    case 2: // This for decoding
        printf("Enter the string\n");

        // Taking input from the user
        scanf("%s", &str);

        // Using while loop for decoding
        while (str[i] != ' ')
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                if (str[i + 1] >= '0' && str[i + 1] <= '9')
                {
                    l = (str[i] - '0');
                    l = l * 10;
                    r = str[i + 1] - '0';
                    m = l + r;
                }
                else
                {
                    while (m > 0)
                    {
                        printf("%c", str[i + 1]);
                        m--;
                    }
                }
                l = str[i] - '0';
            }
            else
            {
                while (l > 0)
                {
                    printf("%c", str[i]);
                    l--;
                }
            }
            i++;
        }
        break;

        // This option prints the default message
    default:
        printf("Please enter from the GIVEN options.");
        break;
    }

    return 0;
}