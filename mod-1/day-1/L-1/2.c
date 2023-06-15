#include <stdio.h>

int main() {
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100)
        printf("Grade A\n");
    else if (grade >= 75)
        printf("Grade B\n");
    else if (grade >= 60)
        printf("Grade C\n");
    else if (grade >= 50)
        printf("Grade D\n");
    else if (grade >= 0)
        printf("Grade F\n");
    else
        printf("Invalid grade\n");

    return 0;
}
