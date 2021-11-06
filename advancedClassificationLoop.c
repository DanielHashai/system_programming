#include "NumClass.h"

int isArmstrong(int num) {
    int ones;
    int sum = 0;
    int num_in = num;

    while (num > 0) {    
        ones = num % 10;    
        sum += ones * ones * ones;    
        num = num / 10;    
    } 

    return (num_in == sum) ? TRUE : FALSE; 
}

int isPalindrome(int num) {
    int ones;
    int sum = 0;
    int num_in = num;

    while (num > 0) {    
        ones = num % 10;    
        sum = (sum * 10) + ones;    
        num = num / 10;    
    }   

    return (num_in == sum) ? TRUE : FALSE;
}