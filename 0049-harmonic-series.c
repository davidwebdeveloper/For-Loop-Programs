// Write a program to display the n terms of harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<stdio.h>
int main() {
    int i,n;
    float sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        sum = sum + (float)1/(float)i;
        if(i==1) {
            printf("%d",i);
        }
        else {
            printf("1/%d",i);
        }
        if(i<n) {
            printf(" + ");
        }
    }
    printf("\nSum is = %.2f",sum);
}