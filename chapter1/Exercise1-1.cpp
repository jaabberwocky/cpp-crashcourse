#include <cstdio>

int absolute_value(int x)
{
    if (x >= 0)
    {
        return x;
    }
    else
    {
        return -x;
    }
}

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num,
           absolute_value(my_num));
    int my_num2 = 100;
    printf("The absolute value of %d is %d.\n", my_num2, absolute_value(my_num2));
    printf("The sum of %d and %d is %d.\n", my_num, my_num2, sum(my_num, my_num2));
}