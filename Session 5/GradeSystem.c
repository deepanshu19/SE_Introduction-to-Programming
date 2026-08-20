#include <stdio.h>

float calcPercent(int total) {
    return (total / 300.0) * 100;
}

const char* calcGrade(float percent) {

    if (percent >= 95) {
        return "A+";
    }
    else if (percent >= 90) {
        return "A";
    }
    else if (percent >= 85) {
        return "B+";
    }
    else if (percent >= 80) {
        return "B";
    }
    else {
        return "C";
    }
}

int main() {

    int sbjtMrks1, sbjtMrks2, sbjtMrks3, total;
    float percentage;

    printf("Please enter subject 1 marks: ");
    scanf("%d", &sbjtMrks1);

    printf("Please enter subject 2 marks: ");
    scanf("%d", &sbjtMrks2);

    printf("Please enter subject 3 marks: ");
    scanf("%d", &sbjtMrks3);

    if (sbjtMrks1 > 40 && sbjtMrks2 > 40 && sbjtMrks3 > 40) {

        total = sbjtMrks1 + sbjtMrks2 + sbjtMrks3;
        percentage = calcPercent(total);

        printf("\nTotal marks: %d\n", total);
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: %s\n", calcGrade(percentage));

    } else {
        printf("\nStudent is Fail\n");
    }

    return 0;
}
