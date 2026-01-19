//PROGRAM TO FIND VOWELS
#include <stdio.h>
int main()
{
    char s[10];
    int count=0;
    printf("Enter a string: ");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels: %d",count);
    return 0;   
}