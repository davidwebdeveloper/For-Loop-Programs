// Write a program to find the sum of the series [ x - x^3 + x^5 + ......].

#include<stdio.h>
int p(int, int);
int main() {
    int n,sum=0,i,x,count=0,power;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the x value: ");
    scanf("%d",&x);
    for(i=1;i>0;i=i+2) {
        power = p(x,i);
        count++;
        if(count%2==0) {
            power = power*-1;
        }
        printf("\n%d",power);
        sum = sum + power;
        if(count==n)
            break;

    }
    printf("\nsum = %d",sum);
}

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}