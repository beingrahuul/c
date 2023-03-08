#include <stdio.h>

#define DEBUG 1

int main() {
    int a = 10, b = 20, c;
#if DEBUG == 1
    printf("DEBUG mode is on.\n");
#endif

#if defined(DEBUG) && DEBUG == 1
    printf("a = %d\n", a);
    printf("b = %d\n", b);
#endif

    c = a + b;

#if DEBUG == 1
    printf("c = %d\n", c);
#else
    printf("Result: %d\n", c);
#endif

    return 0;
}
