// Write a program to find out the sum of an A.P. series.

#include<stdio.h>
int main() {
    int a,n,d,i,sum=0;
    printf("Enter the starting number: ");
    scanf("%d",&a);
    printf("number of items: ");
    scanf("%d",&n);
    printf("common differece: ");
    scanf("%d",&d);
    for(i=a;n>0;n--) {
        sum = sum + a;
        a = a + d;
    }
    printf("sum = %d",sum);
}