#include<stdio.h>
int main() 
{
    int num, first_digit, last_digit, sum;

    printf("Enter three_digit +ve integer:");
    scanf("%d", &num);
    printf("Enter first_digit:");
    scanf("%d", &first_digit);
    printf("Enter last_digit:");
    scanf("%d", &last_digit);

    first_digit = num / 100;
    sum = first_digit + last_digit;

    printf("\n %d The sum of first & last digit is:", sum);
    return 0;
}