#include <stdio.h>

//Read two integers and compute their sum, average and sum of the squares of thenumbers.
int main() {
    int a, b, sum, square1, square2, sumsq;
    float avg;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    sum = a + b;
    square1 = a * a;
    square2 = b * b;
    sumsq = square1 + square2;
    avg = (float)(a+b)/ 2;
    printf("Sum is %d\n", sum);
    printf("Average is %f\n", avg);
    printf("Sum of the squares of the number is %d\n", sumsq);

    return 0;
}
