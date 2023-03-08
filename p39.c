#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct student s;
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    file = fopen("students.bin", "wb");

    if (file == NULL) {
        printf("Error opening file.");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s.name);
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &s.roll);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, file);
    }

    fclose(file);

    file = fopen("students.bin", "rb");

    if (file == NULL) {
        printf("Error opening file.");
        exit(1);
    }

    printf("\nStudent Details:\n");
    printf("Name\tRoll\tMarks\n");

    while (fread(&s, sizeof(s), 1, file) == 1) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }
    fclose(file);
    return 0;
}
