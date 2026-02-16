#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Digits in reverse order: 0\n");
        return 0;
    }

    printf("Digits in reverse order: ");

    int n = number < 0 ? -number : number;

    while (n > 0)
    {
        printf("%d ", n % 10);
        n /= 10;
    }

    printf("\n");
}