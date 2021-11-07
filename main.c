#include <stdio.h>
#include "NumClass.h"

int main() {

    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int min = (num1 > num2) ? num2 : num1;
    int max = (num1 > num2) ? num1 : num2;
    printf("The Armstrong numbers are:");
    for (int i = min; i <= max; i++) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
 
    printf("The Prime numbers are:");
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

  
    printf("The Strong numbers are: ");
    for (int i = min; i <= max; i++) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

 
    return 0;

}
