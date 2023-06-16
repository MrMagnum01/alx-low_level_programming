#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
0-positive_or_negative.c int n;

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c printf("Last digit of %d is %d ", n, n % 10);
0-positive_or_negative.c if (n % 10 > 5)
0-positive_or_negative.c 0-positive_or_negative.c printf("and is greater than 5\n");
0-positive_or_negative.c else if (n % 10 == 0)
0-positive_or_negative.c 0-positive_or_negative.c printf("and is 0\n");
0-positive_or_negative.c else if (n % 10 < 6 && n % 10 != 0)
0-positive_or_negative.c 0-positive_or_negative.c printf("and is less than 6 and not 0\n");
0-positive_or_negative.c return (0);
}
