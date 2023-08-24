// Write a program to find one's complement of a binary number.

#include<stdio.h>

int main() {
    int n,i,temp,j,k=0;
    int a[50];
    printf("Enter the binary number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i%10;
        a[k]=temp;
        k++;
    }
    for(j=k-1;j>=0;j--) {
        if(a[j]==0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    
    return 0;
}