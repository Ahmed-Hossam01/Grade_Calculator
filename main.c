#include <stdio.h>

int main() {
    int n, i;
    float mark, sum = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter mark for subject %d: ", i);
        scanf("%f", &mark);
        sum += mark;
    }

    average = sum / n;

    printf("\nTotal Marks = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}