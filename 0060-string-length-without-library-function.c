// Write a program to find the length of a string without using the library
// function.

#include<stdio.h>
int main() {
    char str[100];
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++) {}
    printf("Length of the %d",i);
}