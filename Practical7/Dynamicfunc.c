#include<stdio.h>
#include<stdlib.h>

//Allocate the array
int *allocatearray(int n){
    int *p;
    p = (int *) malloc((n)*sizeof(int));
    return p;
}

//FIll with ones
void fillwithones(int *array,int n){
    int i;
    for(i=0;i<n;i++){
        array[i] = 1;
    }
}

//Print the array
void printarray(int *array, int n){
    int i;
    for(i=0; i<n;i++){
        printf("a[%d]=%d\n",i,array[i]);
    }
}

//Deallocate the array
void freearray(int *array){
    free(array);
}

int main(){
    int length,*a;
    
    printf("Please enter the size of array:\n");
    scanf("%d", &length);
    
    a= allocatearray(length);
    fillwithones(a, length);
    printarray(a,length);
    freearray(a);
    
    //To make sure a is deallocated
    a = NULL;
    
    return 0;
}





