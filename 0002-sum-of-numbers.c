// Calculate the sum of numbers from 1 to 100.
#include<stdio.h>
int main() {
    int i,sum=0,end=100;
    for(i=1;i<=end;i++)
    {
        sum =sum+i;
    }
    printf("Sum is = %d",sum);
}