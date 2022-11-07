#include <stdio.h>

/*
Write a program that computes out the largest and smallest values of 5 numbers read from the input
 */
int main() {
    int numbers[6], i, maxi = -999, mini = 999;
    int n = 5;
    printf("Enter the 5 numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > maxi)
            maxi = numbers[i];
        if (numbers[i] < mini)
            mini = numbers[i];
    }
    printf("\n The largest value is:%d", maxi);
    printf("\nThe smallest value is:%d", mini);
    return 0;
}
