#include<stdio.h>

int main() {
    int a = 23;
    int b = 45;
    int c = 20;

    if(a+b>c || b+c>a || c+a>b) {       //for the formation of triangle the sum of two sides should be greater than the third side
        printf("%d, %d, %d are the sides of a triangle.", a, b, c);
    } else {
        printf("%d, %d, %d are not the sides of a triangle.", a, b, c);
    }
    
    return 0;
}