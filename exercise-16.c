/* Exercise 16 — Program that displays average and mention (grade label) */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

const char* get_mention(double avg) {
    if      (avg >= 16) return "Excellent";
    else if (avg >= 14) return "Very Good";
    else if (avg >= 12) return "Good";
    else if (avg >= 10) return "Satisfactory";
    else                return "Fail";
}

int main(void) {
    int n;
    printf("Number of subjects: ");
    scanf("%d", &n);

    double sum = 0.0, grade;
    for (int i = 1; i <= n; i++) {
        printf("  Grade %d/20: ", i);
        scanf("%lf", &grade);
        sum += grade;
    }

    double avg = sum / n;
    printf("\nAverage : %.2f/20  |  Mention : %s\n", avg, get_mention(avg));

    return 0;
}
