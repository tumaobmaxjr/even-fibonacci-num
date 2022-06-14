#include <stdio.h>

int main()
{
    int num, next = 0, first = 0, second = 1, sum = 0;;

    printf("Even Fibonacci num: ");
    while(next<4000000)
    {
        next = first + second;
        if(next%2 == 0)
        {
            printf("%d, ", next);
            sum += next;
        }
        first = second;
        second = next;
    }
    printf("\nSum of Even Fib: %d", sum);
}
