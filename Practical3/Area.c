#include <stdio.h>
#include<math.h>

int main()
{
    //Declaring the variables
    int N=12,i;
    float a = 0.0,bDegr = 60.0;
    float bRad, areaUnd, multi_rad;
    
    
    //Converting the degree cariable into Radians
    bRad = (M_PI * bDegr)/180.0;
    
    //Sum of tan values
    areaUnd = tan(a) + tan(bRad);
    for(i=0;i<60;i+=5){
        areaUnd = areaUnd + 2*tan((M_PI*i)/180.0);
        //Calculating the area using a loop
    }
    
    //COnverting to Radians and computing the partia area
    multi_rad = (M_PI*((bDegr)/2*N));
    areaUnd = multi_rad * areaUnd;
    
    //Printing the answer
    printf("Approximated = %f , Exact = %f\n", areaUnd , log(2.0));
    
    
    
    return 0;
}
