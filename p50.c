#include <stdio.h>

#define STRINGIZE(x) #x
#define STR_CONCAT(a, b) a##b

int main() {

    printf("Value of num1: %s\n", STRINGIZE(10));
    printf("Value of num2: %s\n", STRINGIZE(20));
    printf("%d", STR_CONCAT(20, 50));

    return 0;
}
