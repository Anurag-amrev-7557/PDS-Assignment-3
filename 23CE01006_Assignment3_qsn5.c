#include<stdio.h>

int main() {
    int days;
    float fine;

    printf("Enter the number of Days: \n");
    scanf("%d", &days);

    if(days > 0 && days <= 5) {
        fine = 1 * days;
    }
    if(days >= 6 && days <= 10) {
        fine = 2 * days;
    }
    if(days >= 10) {
        fine = 5 * days;
    }
    if(days >= 30) {
        printf("Your memebership is cancelled.\n");
    }

    printf("You have to pay Rs. %.2f fine.", fine);
    
    return 0;
}