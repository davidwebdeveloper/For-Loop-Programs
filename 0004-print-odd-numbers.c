// Print all Odd numbers from 1 to 50.

#include<stdio.h>
int main() {
    int i,start=0,end = 30;
    for(i=start;i<=end;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
    return 0;
}