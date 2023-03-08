#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("data.txt", "w");
    printf("Enter some text to store in the file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);

    fclose(fp);

    return 0;
}
