#include <stdio.h>

int main() {
    FILE *fp;
    int pos;

    // open the file for reading
    fp = fopen("data.txt", "r");

    
    if (fp == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }
    pos = ftell(fp);
    printf("The current position of the file pointer is: %d\n", pos);

    char buffer[100];
    fgets(buffer, 100, fp);
    printf("Read from file: %s\n", buffer);

   
    pos = ftell(fp);
    printf("The current position of the file pointer is: %d\n", pos);
    rewind(fp);

    fgets(buffer, 100, fp);
    printf("Read from file after rewinding: %s\n", buffer);

    // close the file
    fclose(fp);

    return 0;
}