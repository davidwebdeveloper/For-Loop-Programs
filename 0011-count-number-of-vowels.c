// Count the number of vowels in a string.
#include<stdio.h>
#include<string.h>
int main() {
    int i,count=0;
    char str[] = "david";
    for(i=0;i<strlen(str);i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
        
    }
    printf("Count = %d",count);
    return 0;
}