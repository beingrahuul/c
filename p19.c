#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char name1[100];
    char name2[100];
    char *names[] = {name1, name2};

    printf("Enter a first name: ");
    scanf("%s", name1);

    printf("Enter a second name: ");
    scanf("%s", name2);

    printf("Before swap: %s, %s\n", names[0], names[1]);

    swap(&names[0], &names[1]);

    printf("After swap: %s, %s\n", names[0], names[1]);

    return 0;
}
