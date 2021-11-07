#include "NumClass.h"
#define TRUE 1
#define FALSE 0
#define <math,h>
int isArmstrongAux(int num,int len) {
    if (num==0)
    return 0 ; 
	return (pow((num%10),len) + isArmstrongAux(num/10,len));
}

int isArmstrong(int num) {
    int temp =num;
    int len=0;
    while(temp!=0){
        len++;
        temp = temp/10;
    }
    return (num == isArmstrongAux(num,len)) ? TRUE : FALSE;
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
