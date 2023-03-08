#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int word_count = 0;

    file = fopen("data.txt", "r");

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word_count++;
        }
    }

    fclose(file);

    printf("Number of words in file: %d\n", word_count);

    return 0;
}
