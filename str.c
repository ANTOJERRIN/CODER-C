//strings in c
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//reading string,str-variable which u want to store the data,sizeof-give the size of the variable like [n] means the size too will be n only.
  // scanf("%s",str);//reading string another method
  int i=0,c=0,c1=0;char ch;
    while(str[i]!='\0'&&str[i]!='\n')//'\0' is null character the char  of the string should not be  null character if it is a null chararcter then it is nit the end of the string or it should be even \n chararcter 
    { ch==str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')//checking whether the character is vowel or consonant
        {
            c++;//incrementing the vowel count
        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))//checking whether the character is alphabet or not
        {
            c1++;//incrementing the consonant count
        }
        
        
        i++;

    }
    
       
        return 0;//successful termination of the program

}
//w acp to check whetrher the string is character is vowel or consonaunt provided it should not be digit too
/*#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);//reading character
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))//checking whether the character is alphabet or not
    {
        //checking whether the character is vowel or consonant
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("%c is a vowel.\n",ch);
        }
        else
        {
            printf("%c is a consonant.\n",ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
    return 0;//successful termination of the program
}*/
/*//printing vowels and consonaunts from my name and counting them
#include <stdio.h>//linker section
int main(){
    char name[20];
    printf("enter your name:");
    scanf("%s",name);//taking input from the user
    int c=0,c1=0,i;
    for(i=0;name[i]!='\0'&&name[i]='\n';i++){
        
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            
            printf("vowels are %c\n",name[i]);
            c++;
            continue;
        }
        else if((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z')){
            printf("consonaunts are %c\n",name[i]);
            c1++;
        }
        
    }
    printf("total number of vowels are %d\n",c);
    printf("total number of consonaunts are %d\n",c1);
    return 0;//successful termination

}
*/
