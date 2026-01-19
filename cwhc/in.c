//project-1 random number generative
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));//initialise random number generator
    int rnu=(rand()%100)+1;//finding the random number btw 0 to 99 and adding 1 to find btw 1 to 100
    int gunu;//inpputing ni form user side
    int nugu=0;//for counting the number of guessses
    do
    {
        printf("guess the number");
        scanf("%d",&gunu);//inputing user guess
        if(gunu>rnu)
        {
            printf("lower no pls\n");
        }
        else if(gunu<rnu)
        {
            printf("higher number pls!\n");
        }
        else{
            printf("congrats \n");
        }
        nugu++;

        /* code */
    } while(gunu!=rnu);
    
printf("Your guessed number in %d guesses",nugu);
return 0;
    
}