#include <stdio.h>

int main() {
    char roll_no[20], name[100];
    float physics_marks, math_marks, chemistry_marks;

    printf("Enter Roll No: ");
    scanf("%s", roll_no);
    printf("Enter your name: ");
    scanf(" %s", name);
    printf("Enter marks in physics: ");
    scanf("%f", &physics_marks);
    printf("Enter marks in physics: ");
    scanf("%f", &math_marks);
    printf("Enter marks in chemistry: ");
    scanf("%f", &chemistry_marks);

    float total_marks = physics_marks + math_marks + chemistry_marks;
    float percentage = (total_marks / 300.0) * 100.0;

    printf("Roll No: %s\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics_marks);
    printf("Math Marks: %.2f\n", math_marks);
    printf("Chemistry Marks: %.2f\n", chemistry_marks);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
