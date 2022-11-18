
#include <stdio.h>
#include <math.h>

//Function to convert degree value to radian.
float deg_to_rad(float thetha){
    return M_PI * thetha/180.0;
}

//Function to calculate the calue using the equation
float trap_rule(float a,float b,int N,float function_array[N + 1]){
    float sum = function_array[0] + function_array[N];
    int i =0;
    for( i = 1;i < N ;i++){
        sum += 2 * function_array[i];
    }
    return ((b-a)*(sum)/(2*N));
}

//Main function to call the sub function
int main(void)
{
    float start = 0;
    float end = 60;
    int N = 12;
    float step_size = (end-start)/N;
    float tan_arr[N + 1];
    
    int i = 0;
    for(i = 0 ;i<=N;i++){
        tan_arr[i] = tan(deg_to_rad(step_size*i));
    }
    
    //Calling the function to calculate the value
    float ans = trap_rule(deg_to_rad(start),deg_to_rad(end),N,tan_arr);
    printf("The summed value is %f\n",ans);
    //Printitng the actual value
    printf("The actual values is %f\n",logf(2));
    return 0;
}
