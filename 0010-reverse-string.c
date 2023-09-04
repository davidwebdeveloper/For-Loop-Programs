// Print the reverse of a given string.

#include<stdio.h>
int main() {
    int i,j,count=0;
    char str[] = "david";
    for(i=0;str[i]!='\0';i++)
        count++;
    for(j=count;j>=0;j--)
        printf("%c",str[j]);
    return 0;

}