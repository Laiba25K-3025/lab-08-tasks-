#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    int i, j;
    int students = 0, empty = 0;

    printf("Classroom Seating Chart:\n");
    printf("========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (i = 1; i <= rows; i++) {
        printf("Row %d ", i);
        for (j = 1; j <= cols; j++) {
            if ((i + j) % 2 == 0) {
                printf("x ");
                students++;
            } else {
                printf("o ");
                empty++;
            }
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}
