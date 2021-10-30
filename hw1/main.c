#include <stdio.h>
#include "NumClass.h"

void main() {

    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int min = (num1 > num2) ? num2 : num1;
    int max = (num1 > num2) ? num1 : num2;
    
    printf("Prime Numbers: ");
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Armstrong Numbers: ");
    for (int i = min; i <= max; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Strong Numbers: ");
    for (int i = min; i <= max; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Palindrome Numbers: ");
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

}