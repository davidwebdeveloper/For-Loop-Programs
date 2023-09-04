// Find the second smallest element in an array.
#include<stdio.h>
#include<string.h>
int main() {
    int i,min,first;
    char  a[] ={10,4,3,7,1};
    min = a[0];
    for(i=1;i<strlen(a);i++) {
        if(min>a[i]) {
            first = min;
            min = a[i];
        }
    }
    printf("Second smallest = %d",first);
    return 0;
}