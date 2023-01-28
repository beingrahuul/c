//A five digit no. is taken input from user, write a program to reverse that number and find sum of the digit of its digit too.

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, sum = 0;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    // Reversing the number
    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }
    temp = reversedNum;

    // Finding the sum of digits
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);
    printf("Sum of digits: %d", sum);

    return 0;
}
