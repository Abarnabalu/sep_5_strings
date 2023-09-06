#include<stdio.h>
#include<string.h>
void reverse(char *str);
int main()
{
    char string[90];
    printf("enter the string:\n");
    scanf("%s",string);
    reverse(string);
    return 0;
}
void reverse(char *str)
{
    char rev[90];
    for(int j=0;j<strlen(str);j++)
    {
        rev[j]=str[(strlen(str))-j-1];
        printf("%c",rev[j]);
    }
}
