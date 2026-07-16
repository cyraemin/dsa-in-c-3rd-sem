//3.	Implement length (in feet and inches) using structure. Write routines to add, multiply and subtract the lengths
#include <stdio.h>

struct Length
{
    int feet;
    int inches;
};

int main()
{
    struct Length l1, l2, add, sub, mul;

    printf("Enter first length (feet inches): ");
    scanf("%d%d", &l1.feet, &l1.inches);

    printf("Enter second length (feet inches): ");
    scanf("%d%d", &l2.feet, &l2.inches);

    // Addition
    add.feet = l1.feet + l2.feet;
    add.inches = l1.inches + l2.inches;

    if (add.inches >= 12)
    {
        add.feet++;
        add.inches -= 12;
    }

    // Subtraction
    sub.feet = l1.feet;
    sub.inches = l1.inches;

    if (sub.inches < l2.inches)
    {
        sub.feet--;
        sub.inches += 12;
    }

    sub.feet -= l2.feet;
    sub.inches -= l2.inches;

    // Multiplication (First length × 2)
    mul.feet = l1.feet * 2;
    mul.inches = l1.inches * 2;

    if (mul.inches >= 12)
    {
        mul.feet += mul.inches / 12;
        mul.inches %= 12;
    }

    printf("\nAddition = %d feet %d inches", add.feet, add.inches);
    printf("\nSubtraction = %d feet %d inches", sub.feet, sub.inches);
    printf("\nMultiplication = %d feet %d inches", mul.feet, mul.inches);

    return 0;
  }