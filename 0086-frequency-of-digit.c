// Write a program to find the frequency of each digit in a given integer.

#include<stdio.h>
int main() {
    int n,i,temp,j;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i%10;
        a[temp]++;
    }
    for(j=0;j<10;j++) {

        printf("\nThe frequency of %d is %d",j,a[j]);
    }
    return 0;

}