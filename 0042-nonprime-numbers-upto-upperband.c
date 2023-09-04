// Write a program to list non-prime numbers from 1 to an upperbound. 

// Write a program to find prime number within a range. 
#include<stdio.h>
int main() {
    int count;
    int i,j,ub;
    printf("Enter the uppurbound value: ");
    scanf("%d",&ub);
    for(i=1;i<=ub;i++) {
        count=0;
        for(j=1;j<=i/2;j++) {
            if(i%j==0)
                count++;
        }
        if(count>1)
                printf("\nNon prime numbers = %d ",i);
    }
    
}