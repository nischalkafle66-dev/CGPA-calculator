#include <stdio.h>

int main() {
    int n, i;
    float gradePoint, creditHour;
    float totalGradePoints = 0, totalCredits = 0, cgpa;

    printf("Enter number of semester: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("semester %d\n", i);

        printf("Enter Grade Point\n: ");
        scanf("%f", &gradePoint);

        printf("Enter Credit Hour: ");
        scanf("%f", &creditHour);

        totalGradePoints = gradePoint * creditHour;
        totalCredits = creditHour;
    }
    cgpa = totalGradePoints / totalCredits;

    printf("Total Credit Hours is %f\n", totalCredits);
    printf("CGPA = %f\n", cgpa);

    return 0;
}
