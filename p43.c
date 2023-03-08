#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    long pos;
    fp = fopen("data.txt", "w");

    fputs("Hello, world!\n", fp);
    fputs("This is a test\n", fp);
    fputs("Goodbye, world!\n", fp);
    fclose(fp);
    fp = fopen("data.txt", "r");

    fseek(fp, 16L, SEEK_SET);

    fgets(str, sizeof(str), fp);
    printf("Second line: %s", str);

    fseek(fp, 0L, SEEK_END);

    pos = ftell(fp);
    printf("File size: %ld bytes\n", pos);

    fclose(fp);

    return 0;
}
