#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // open the file for writing
    fp = fopen("data.txt", "w");

    // check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // get input from user and write it to file
    printf("Enter some text to store in the file: ");
    while ((ch = getchar()) != '\n') {
        putc(ch, fp);
    }

    // close the file
    fclose(fp);

    return 0;
}
