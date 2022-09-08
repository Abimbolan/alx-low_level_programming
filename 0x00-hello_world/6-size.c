#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int the_int;
float the_float;
char the_char;
long long the_long_long;
long the_long;
printf("Size of a char: %zu byte(s)\n", sizeof(the_char));
printf("Size of an int: %zu byte(s)\n", sizeof(the_int));
printf("Size of a long int: %zu byte(s)\n", sizeof(the_long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(the_long_long));
printf("Size of a float: %zu byte(s)\n", sizeof(the_float));
return (0);
}
