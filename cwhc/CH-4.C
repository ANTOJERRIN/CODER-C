//looping contructs ...
//break-exits the loop
//continue-skips the current iteration and jumps to next iteration
//return-exits from the function
//practice sets
//qn1-multipliction table of a number n
    #include <stdio.h>
    int main(){
        int n,i;
        printf("enter the value of n:");
        scanf("%d",&n);
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",n,i,n*i);
        }
        return 0;
//qn-2-> reverse order multiplication tables  
#include <stdio.h>
    int main(){
        int n,i;
        printf("enter the value of n:");
        scanf("%d",&n);
        for(i=10;i>=1;i--){
            printf("%d x %d = %d\n",n,i,n*i);
        }
        return 0;    
  //qn-3->sum of first 10 natural numbers
#include <stdio.h>
int main()
{
    int i=1,sum=0;
    for(;i<=10;++i){
        sum+=i;

    }printf("the sum of first 10 natural numbers is %d",sum);
    return 0;

}       
  //qn-4->qn-3 in do while loop
  #include <stdio.h>
  int main()
  { int i=1,sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum of first 10 natural numbers is %d",sum);
    return 0;

    //qn-5->8x1 to 8x10 find the sum of this
    #include <stdio.h>
    int main()
    {  int n;
        printf("enter the number=\n");
        scanf("%d",&n);

        int sum=0,i=1,mul;
        for(;i<=n;i++)
        {
            mul=n*i;
            sum+=mul;
        }printf("the sum is %d\n",sum);
        return 0;
    }
    //qn-6->factorial
    #include <stdio.h>
    int main()
    { int n;
        printf("enter the number:\n");
        scanf("%d",&n);
        int i=1,prod=1;
        for(;i<=n;i++)
        {
            prod=prod*i;
        }
        printf("factorial=%d\n",prod);
        return 0;

    }
    //qn-7->prime number
    #include <stdio.h>
#include <math.h> // to use sqrt()

int main() {
    int n, i;
    int isPrime = 1;  // 1 means true, 0 means false

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
//qn-8->using while loop prime/nonprime
#include <stdio.h>
#include <math.h> // to use sqrt()

int main() {
    int n, i;
    int isPrime = 1;  // 1 means true, 0 means false

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else { 
        i=2;
        while(i<=sqrt(n))
        {
            if (n % i == 0) {
                isPrime = 0;
                i++;
                break;
        }
        
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}




      
    

    
