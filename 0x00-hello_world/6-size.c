#include <stdio.h>
/*
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int the-int;
float the-float;
char the-char;
long long the-long-long;
long the-long;
printf("Size of a char: %zu byte(s)\n", sizeof(the-char));
printf("Size of an int: %zu byte(s)\n", sizeof(the-int));
printf("Size of a long int: %zu byte(s)\n", sizeof(the-long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(the-long-long));
printf("Size of a float: %zu byte(s)\n", sizeof(the-float));
return (0);
}
