//  Count the number of negative numbers in a list of integers.
#include<stdio.h>
#include<string.h>
int main() {
    int i,count=0;
    char a[] = {-16,24,14,10};
    for(i=0;i<strlen(a);i++) {
        if(a[i]<0)
            count++;
        
    }
    printf("Count = %d",count);
    return 0;
}