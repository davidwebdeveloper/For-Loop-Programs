// Write a program to find the first 10 natural number

#include<stdio.h>
int main() {
    int n,i;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",i);
    return 0;

}