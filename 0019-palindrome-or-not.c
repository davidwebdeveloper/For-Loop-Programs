// Check if the given number is a palindrome.

#include<stdio.h>
int main() {
    int n,i,temp,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10) {
        temp = i %10;
        rev = rev*10 + temp;
    }
    // printf("Reversed number: %d",rev);
    if(rev==n)
        printf("%d is a palindrome number",n);
    else
        printf("%d is not a palindrome number",n);
}