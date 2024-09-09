// WAP to find the number of digits in a number input by user
#include <stdio.h>
int main()
{
    int n;
    printf("enter your desired number: ");
    scanf("%d", &n);
    int count = 0;
    for (n; n != 0; n /= 10)
    {
        count++;
    }
    printf("%d", count);
}