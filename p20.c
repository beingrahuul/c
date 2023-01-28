#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, length;
    int palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word) - 1;

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("The word %s is a palindrome\n", word);
    } else {
        printf("The word %s is not a palindrome\n", word);
    }

    return 0;
}
