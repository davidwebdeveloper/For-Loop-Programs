// Given a list of numbers, find the index of the first occurrence of a given number.

#include<stdio.h>
int main() {
    int a[] = {4,2,3,4,5,6};
    int find,i;
    printf("Enter the number: ");
    scanf("%d",&find);
    int size = sizeof(a)/sizeof(a[0]);

    for(i=0;i<size;i++) {
        if(a[i]==find) {
            break;
        }
    }
    printf("%d",i+1);
}