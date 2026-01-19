//printing vowels and consonaunts from my name and counting them
#include <stdio.h>//linker section
int main(){
    char name[20];
    printf("enter your name:");
   // scanf("%s",name);//taking input from the user
    fgets(name,20,stdin);
    int c=0,c1=0,i;
    while(name[i]!='\0'&&name[i]!='\n'){
        
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            
            printf("vowels are %c\n",name[i]);
            c++;
            continue;
        }
        else if((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z')){
            printf("consonaunts are %c\n",name[i]);
            c1++;
        }
        i++;
        
    }
    printf("total number of vowels are %d\n",c);
    printf("total number of consonaunts are %d\n",c1);
    return 0;//successful termination

}