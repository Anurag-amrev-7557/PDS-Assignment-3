#include<stdio.h>

int main() {
    float T, w, M, N, K; // T = Final Score, W = Attendance Weightage, M = Marks Obtained, N = no of classes attended, K = Total number of classes conducted;
    
    printf("Enter the value of M or Marks Obtained: ");
    scanf("%f", &M);

    while(M<=0 || M>=100) {         //code for limiting the value of marks obtained between 0 and 100;
        printf("Enter the correct value of marks obtained: ");
        scanf("%f", &M);
    }

    printf("Enter the value of N or Number of classes attended: ");
    scanf("%f", &N);

    printf("Enter the value of K or Total number of classes conducted: ");
    scanf("%f", &K);
    
    float W = N / K;
    T = M * W;

    printf("Final Score = %f\n", T);
    
    if(T >= 90) {
        printf("Grade = EX");
    } else if (T >= 80 && T < 89) {
        printf("Grade = A");
    } else if (T >= 70 && T < 79) {
        printf("Grade = B");
    } else if (T >= 60 && T < 69) {
        printf("Grade = C");
    } else if (T >= 50 && T < 59) {
        printf("Grade = D");
    } else if (T >= 40 && T < 49) {
        printf("Grade = P");
    } else {
        printf("Grade = F");
    }  

    if(M<0 || M>100) {
        printf("Enter the correct value of marks: ");
        scanf("%d", &M);
    } 
    if(N>K) {
        printf("Enter the correct value of no of classes: ");
        scanf("%d", &N);
    } 

    return 0;
}