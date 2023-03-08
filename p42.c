#include <stdio.h>

int main() {
    FILE *fp;
    int data;
    fp = fopen("data.dat", "wb");

    printf("Enter a number to store in the file: ");
    scanf("%d", &data);
    putw(data, fp);

    fclose(fp);

    fp = fopen("data.dat", "rb");

    data = getw(fp);
    printf("Data read from file: %d\n", data);


    fclose(fp);

    return 0;
}
