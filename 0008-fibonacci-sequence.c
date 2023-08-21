// Print the Fibonacci sequence up to the 20th term.
#include<stdio.h>
int main() {
    int i,first=0,second=1,temp;
    printf("%d %d ",first,second);
    for(i=1;i<=20;i++)
    {
        temp = first + second;
        printf("%d ",temp);
        first = second;
        second = temp;
    }
    return 0;

}