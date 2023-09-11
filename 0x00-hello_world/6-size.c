#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the size of various data types in bytes,
 * adhering to the Betty style guidelines, and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return (0);
}
