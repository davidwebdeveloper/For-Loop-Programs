// Print all even numbers from 1 to 50.
#include<stdio.h>
int main() {
    int i,start=1,end=50;
    for(i=start;i<=end;i++) {
        if(i%2==0) {
            printf("%d ",i);
        }
    }
}