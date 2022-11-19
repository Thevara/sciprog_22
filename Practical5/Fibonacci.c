#include <stdio.h>
#include <stdlib.h>

//Declaring the fibonacci function
void fibonacci(int *a, int *b);

int main()
{
    long int n;
    int i;
    int f1 = 1, f0 = 0;
    
    //Accepting the n value
    printf("Enter a positive Integer\n");
    scanf("%ld",&n);
    
    // Checking if it is a negative number
    if(n<1)
    {
        printf("The number is not positive\n");
        exit(1);
    }
    
    //Printing the first 2 numbers of the series.
    printf("The fibonacci series is:\n");
    printf("%d, %d, ",f0,f1);
    
    //Looping to find the next number and print it.
    for(i = 2; i <= n;i++){
        fibonacci(&f1,&f0);
        printf("%d, ", f1);
        if(((i+1)%10) == 0) printf("\n");
    }

    return 0;
}

//Function to find the Fibonacci series
void fibonacci(int *a, int *b){
    int next;
    
    next = *a + *b;
    *b = *a;
    *a = next;
}


