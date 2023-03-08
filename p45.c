#include <stdio.h>

int main() {
    FILE *file1, *file2, *merged_file;
    char merged_filename[100];
    char ch;

    printf("Enter the merged filename: ");
    scanf("%s", merged_filename);

    file1 = fopen("data.txt", "r");
    if (file1 == NULL) {
        printf("Error opening data.txt.\n");
        return 0;
    }

    file2 = fopen("person.txt", "r");
    if (file2 == NULL) {
        printf("Error opening person.txt.\n");
        return 0;
    }

    merged_file = fopen(merged_filename, "w");
    if (merged_file == NULL) {
        printf("Error creating %s.\n", merged_filename);
        return 0;
    }


    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, merged_file);
    }


    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, merged_file);
    }

    printf("Merged successfully.\n");

    fclose(file1);
    fclose(file2);
    fclose(merged_file);

    return 0;
}
