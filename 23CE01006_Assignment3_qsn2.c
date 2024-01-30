#include<stdio.h>

int main() {

    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int c;
    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("The numbers you entered are : %d, %d and %d\n", a , b, c);

    if(a>b && a>c) {
        printf("Largest number is %d", a);
    }
      else if (b>a && b>c) {
        printf("Largest number is %d", b);
    } else {
        printf("Largest number is %d", c);
    }
    return 0;
}