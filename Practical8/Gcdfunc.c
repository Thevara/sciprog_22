#include<stdio.h>

//Declaring the functions
int iterativeGCD(int a, int b);
int recursiveGCD(int a,int b);

int main(){
    
    int a,b,inperr;
    
//Inputing the variables
    printf("Please input 2 positive integers : \n");
    inperr = scanf("%d %d", &a,&b);
    if(inperr != 2){
        printf("Please enter 2 integers\n");
        return 1;
    }
    
	// Checking for errors by non positive numbers
    if( a<= 0 || b<=0){
        printf("Non positive numbers present!\n");
        return 1;
    }
    
    printf("IterativeGCD(%d,%d) = %d\n",a,b,iterativeGCD(a,b));
    printf("RecursiveGCD(%d,%d) = %d\n",a,b,recursiveGCD(a,b));

    
    
    return 0;
}

//Creation of iterative function
int iterativeGCD(int a,int b){
    int temp;
	//Plugging the code given in the question
    while(b!=0){
        temp = b;
        b = a %b;
        a = temp;
    }
    return a;
}

//Creation of recursive function
int recursiveGCD(int a,int b){
    if(b ==0){
        return a;
    }
    else{
        return(recursiveGCD(b,a%b));
    }
}

