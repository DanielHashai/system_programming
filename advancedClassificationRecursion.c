#include "NumClass.h"
#define TRUE 1
#define FALSE 0
}
int pow1(int a, unsigned int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return pow1(a, b / 2) * pow1(a, b / 2);
    return a * pow1(a, b / 2) * pow1(a, b / 2);
}
int isArmstrongAux(int num,int len) {
    if (num==0)
    return 0 ; 
	return (pow1((num%10),len) + isArmstrongAux(num/10,len));
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

    return ((num%10 * pow1(10, digit)) + reverse(num/10));
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
