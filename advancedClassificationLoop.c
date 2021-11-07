#include "NumClass.h"
#define True 1
#define False 0
int pow(int a, unsigned int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return pow(a, b / 2) * pow(a, b / 2);
    return a * pow(a, b / 2) * pow(a, b / 2);
}
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
        return True;
    else
        return False;
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
