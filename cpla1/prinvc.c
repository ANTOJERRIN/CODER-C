//vowels and consonants from name program
//printing vowels and consonaunts from my name and counting them
#include <stdio.h>//linker section
int main(){
    char name[20];
    printf("enter your name:");
   // scanf("%s",name);//taking input from the user
    fgets(name,20,stdin);
    int c=0,c1=0,c2=0,c3=0,i;
    while(name[i]!='\0'&&name[i]!='\n')
    {
        
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            
            printf("vowel is %c\n",name[i]);
            c++;
            
        }
        if((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z')){
            printf("consonaunt is %c\n",name[i]);
            c1++;
        }
        if(name[i]==' '){
            //do nothing for space
            c2++;

        }
        else{
            //do nothing for other characters
            c3++;
        }
        
        i++;
        
    }
    printf("total number of vowels are %d\n",c);
    printf("total number of consonaunts are %d\n",c1);
    printf("total number of spaces are %d\n",c2);
    printf("total number of characters are %d\n",c+c1+c2);
    printf("lengght of the name is %d\n",i-1);//excluding null character
    printf("lenght of the name is %d\n",sizeof(name));//including null character
    return 0;//successful termination

}