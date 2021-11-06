#include "NumClass.h"

int isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0 && i != num) return FALSE;
    }
    return TRUE;
}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int sum = 0;
    int ones;
    int num_in = num;
    while (num != 0) {
        ones = num % 10;
        sum += factorial(ones);
        num = num /10;
    }
    return (sum == num_in) ? TRUE : FALSE;
}