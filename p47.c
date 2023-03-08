#include <stdio.h>

int main() {
    FILE *data_file, *even_file, *odd_file;
    char data_filename[100] = "data.txt";
    char even_filename[100] = "even.txt";
    char odd_filename[100] = "odd.txt";
    int number;

    data_file = fopen(data_filename, "w");
    if (data_file == NULL) {
        printf("Error creating data file.\n");
        return 0;
    }
    for (number = 1; number <= 10; number++) {
        fprintf(data_file, "%d\n", number);
    }
    fclose(data_file);

    data_file = fopen(data_filename, "r");
    if (data_file == NULL) {
        printf("Error opening data file.\n");
        return 0;
    }
    even_file = fopen(even_filename, "w");
    if (even_file == NULL) {
        printf("Error creating even file.\n");
        return 0;
    }
    odd_file = fopen(odd_filename, "w");
    if (odd_file == NULL) {
        printf("Error creating odd file.\n");
        return 0;
    }

    while (fscanf(data_file, "%d", &number) == 1) {
        if (number % 2 == 0) {
            fprintf(even_file, "%d\n", number);
        } else {
            fprintf(odd_file, "%d\n", number);
        }
    }

    fclose(data_file);
    fclose(even_file);
    fclose(odd_file);

    printf("Done.\n");

    return 0;
}
