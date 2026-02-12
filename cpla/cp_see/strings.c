#include <stdio.h>

int main() {
    char n[100];
    printf("enter the sname\n");
    fgets(n,100,stdin);
    int i=0,c=0,c1=0,c2=0,c3=0;char t;
    while(n[i]!='\0' && n[i]!='\n'){
        t==n[i];
         if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')//checking whether the character is vowel or consonant
        {
            c++;//incrementing the vowel count
        }
        else if((t>='a'&&t<='z')||(t>='A'&&t<='Z'))//checking whether the character is alphabet or not
        {
            c1++;//incrementing the consonant count
        }
        else if(t=='')
        {
            c2++;
        }
        
        i++;

    }
    printf(i)
    printf(c)
    printf(c1)
    printf(c2)
    

        
    
    return 0;
}
