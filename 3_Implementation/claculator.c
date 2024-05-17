#include <stdio.h>

int main()
{
    int num1, num2, add, subb, mul;
    printf("Enter two numbers");
    scanf("%d %d",&num1, &num2);

    // new comment

    add = num1 + num2;
    subb = num1 - num2;
    mul = num1 * num2;

    printf("Addition of numbers %d",add);
    printf("Subtraction of numbers %d",subb);
    printf("Multiplication of numbers %d",mul);
    return 0;
}