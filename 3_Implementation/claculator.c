#include <stdio.h>

int main()
{
    int num1, num2, add, subb, mul,DIV;
    printf("Enter two numbers");
    scanf("%d %d",&num1, &num2);

    add = num1 + num2;
    subb = num1 - num2;
    mul = num1 * num2;
    DIV = num1/num2;

    printf("Addition of numbers %d",add);
    printf("Subtraction of numbers %d",subb);
    printf("Multiplication of numbers %d",mul);
    printf("division of the numbers %d",DIV);
    return 0;
}