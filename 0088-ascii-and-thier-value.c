// Write a program to print all ASCII character with their values.

#include<stdio.h>
int main() {
    int i,start,end;
    printf("Enter the start value: ");
    scanf("%d",&start);
    printf("Enter the end value:");
    scanf("%d",&end);
    for(i=start;i<=end;i++) {
        printf("%d---->%c",i,i);
        printf("\n");
    }
    return 0;
    
}