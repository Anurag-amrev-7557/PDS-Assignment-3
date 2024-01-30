#include<stdio.h>

int main() {
    //Input from the user
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    //Determination of number to be +ve, -ve or zero
    x == 0 ? printf("Given number %d is zero.", x) : x > 0 ? printf("Given number %d is positive.", x) : printf("Given number %d is negative.", x);

    return 0;
}