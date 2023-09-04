// Write a program to find prime number within a range. 
#include<stdio.h>
int main() {
    int count;
    int i,j;
    for(i=1;i<=100;i++) {
        count=0;
        for(j=1;j<=i/2;j++) {
            if(i%j==0)
                count++;
        }
        if(count<=1)
                printf("%d ",i);
    }
    
}