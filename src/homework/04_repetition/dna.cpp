//add include statements
#include "dna.h"

//add function(s) code here
int factorial(int num)
{
    int sum = 1;
    int i = num;
    while (i > 0)
    {
        sum = sum * i;
        i--;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if (num1 < num2)
        {
            num1 += num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }
        else
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}