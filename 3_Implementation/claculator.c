#include <stdio.h>

int main()
{
    int num1, num2, add, sub, mul;
    printf("Enter two numbers");
    scanf("%d %d",&num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;

    printf("Addition of numbers %d",add);
    printf("Subtraction of numbers %d",sub);
    printf("Multiplication of numbers %d",mul);
    return 0;
}