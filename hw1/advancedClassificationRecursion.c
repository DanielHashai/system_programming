#include "NumClass.h"
#include "math.h"

int isArmstrongAux(int num) {
    if (num>0) return (pow(num%10,3) + isArmstrongAux(num/10));
}

int isArmstrong(int num) {
    return (num == isArmstrongAux(num)) ? TRUE : FALSE;
}

/**
 * Recursive function to find reverse of any number
 */
int reverse(int num) {
    /* Find number of digits in num */
    int digit = (int)log10(num);
    
    /* Recursion base condition */
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

/**
 * Function to check whether a number is palindrome or not.
 * This function returns 1 if the number is palindrome otherwise 0.
 */
int isPalindrome(int num) {
    /* 
     * Check if the given number is equal to 
     * its reverse.
     */
    return (num == reverse(num)) ? TRUE : FALSE;
}