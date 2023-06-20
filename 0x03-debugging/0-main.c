#include <stdio.h>

void checkInteger(int num);

int main(void)
{
    int number = 0;
    
    checkInteger(number);
    
    return 0;
}

void checkInteger(int num)
{
    if (num >= 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else
    {
        printf("%d is a negative number.\n", num);
    }
}
