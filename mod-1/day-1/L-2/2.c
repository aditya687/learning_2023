#include <stdio.h>

char get_grade(int score) {
    char grade;
    
    switch (score) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 75 ... 89:
            grade = 'B';
            break;
        case 60 ... 74:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 36 ... 49:
            grade = 'E';
            break;
        case 0 ... 35:
            grade = 'F';
            break;
        default:
            grade = 'I'; // 'I' represents an invalid score
    }
    
    return grade;
}

int main() {
    int score;
    char grade;
    
    printf("Enter the score: ");
    scanf("%d", &score);
    
    grade = get_grade(score);
    
    printf("Grade %c\n", grade);
    
    return 0;
}
