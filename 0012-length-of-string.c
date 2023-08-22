// Calculate the length of a string without using the built-in function.
#include<stdio.h>
int main() {
    int i,count=0;
    char str[] = "david";
    for(i=0;str[i]!='\0';i++)
        count++;
    printf("Count = %d",count);
}

