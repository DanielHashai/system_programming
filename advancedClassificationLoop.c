#include "NumClass.h"
#include <math.h>
#define TRUE 1
#define FALSE 0

int inOrder(int a)
{
    int i = 0;
    while (a) {
        i++;
        a = a / 10;
    }
    return i;
}
int isArmstrong(int a)
{
    int j;
    int i = inOrder(a);
    int temp = a;
    int sum = 0;
    while (temp) {
        j = (temp%10);
        sum += pow(j, i);
        temp = (temp/10);
    }
    if (sum==a)
        return TRUE;
    else
        return FALSE;
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
