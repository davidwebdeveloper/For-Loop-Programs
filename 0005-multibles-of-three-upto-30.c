// . Generate a sequence of multiples of 3 up to 30.

#include<stdio.h>
int main() {
    int start = 1, end = 30,i;
    for(i=start;i<=end/3;i++)
        printf("%d ",3*i);
    return 0;
}