#include <stdio.h>//header file inclusion
void input(char *s)
{
    printf("Enter the string");//input prompt
    scanf("%s",s);
}

void count_vowels_consonants(char *s, int *vcount, int *ccount)
{
    *vcount = 0;//initializing vowel count to 0
    *ccount = 0;//initializing consonant count to 0 using pointer
    
    for(int i = 0;s[i] != '\0';i++)
    {
        if (( s[i] >= 'a') && (s[i] <= 'z') ||
            ( s[i] >= 'A') && (s[i] <= 'Z'))
            {
                if ( s[i]=='A'|| s[i]=='a'||
                     s[i]=='E'|| s[i]=='e'||
                     s[i]=='I'|| s[i]=='i'||
                     s[i]=='O'|| s[i]=='o'||
                     s[i]=='U'|| s[i]=='u') {
                        (*vcount)++;//here operator precedence is important ()
                }
                else {
                      (*ccount)++;//incrementing consonant count using pointer
                }
            
            }
    }
}

void output(char *s, int vcount, int ccount) 
{
    printf("The number vowels in %s is %d\nThe number consonsants in %s is %d", s,
           vcount, s, ccount);//printing the result
}

int main()
{
    char s[100];
    input(s);//input function call
    int vcount,ccount;
    count_vowels_consonants(s,&vcount,&ccount);//computer function call
    output(s,vcount,ccount);//output function call
    return 0;
} 

/* LE5.c: Program to count number of vowels and consonants in a string */