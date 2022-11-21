#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(void){
    
    int i,order;
    double e, *terms;
    
    printf("Enter the polynomial required order : ");
    //Checking for errors in the user input
    if(scanf("%d",&order) != 1){
        printf("Invalid number");
        return 1;
    }
    
    // Allocate space foe the terms array
    terms = malloc(order*sizeof(double));
    for (i =0; i<order; i++){
        terms[i] = 1.0/(double)factorial(i+1);
        printf("\ne term for %d is %1.14lf",order,terms[i]);
    }
    
    e = 1.0;
    for(i =0; i<order;i++){
        e = e+terms[i];
        
    }
    
    //Deallocating the allocated memory
    free(terms);
    
    printf("\ne is estimated to be %1.14lf, with differece %1.14lf \n",e,e-exp(1.0));
    
    return 0;
}

//Writing the factorial function
int factorial(int n){
    
    if(n<0){
        printf("Error: Number should be positive");
        return(-1);
    }
    else if (n == 1){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}