#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, word_count = 0;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            word_count++;
        }
    }

    printf("The number of words in the string is %d\n", word_count + 1);

    return 0;
}
