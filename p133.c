#include<stdio.h>
#include<string.h>
void length(char *str[]);
int main()
{
    char string[90];
    printf("Enter the string:\n");
    scanf("%s",string);
    length(string);
    return 0;
}
void length(char *str[])
{
    printf("The length of the string is: %d",strlen(str));
}
