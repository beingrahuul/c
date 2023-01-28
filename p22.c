#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int i, length;
    char temp;

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

void concatenate_strings(char *str1, char *str2) {
    strcat(str1, str2);
}

int length_of_string(char *str) {
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    return strlen(str);
}

void copy_string(char *str1, char *str2) {
    strcpy(str2, str1);
}

int main() {
    char str1[100], str2[100];
    int choice;
    int length;
    printf("1. Reverse a string\n");
    printf("2. Concatenate two strings\n");
    printf("3. Find length of a string\n");
    printf("4. Copy one string to another\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            reverse_string(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            concatenate_strings(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 3:
            length = length_of_string(str1);
            printf("Length of the string is: %d\n", length);
            break;
        case 4:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            copy_string(str1, str2);
            printf("Copied string: %s\n", str2);
            break;
        default:
            printf("Invalid choice\n");
    }

}