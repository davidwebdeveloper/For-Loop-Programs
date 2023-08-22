// Find the smallest prime factor of a given number.

#include<stdio.h>
int main() {
    int n,i,min;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>1;i--) {
        if(n%i==0)
            min=i;        
    }
    printf("Smallest prime factor = %d",min);
}