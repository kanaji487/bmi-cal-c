#include<stdio.h>

int main()
{
    float weight,height,BMI;
    
    printf("Enter your weight(kg) and height(meter)\n");
    scanf("%f%f",&weight,&height);
    
    BMI = weight / (height * height);
    
    printf("Your BMI = %f\n",BMI);


    if(BMI < 18.5)                    
           printf("Under weight\n");
    else if(BMI >= 18.5 && BMI <= 25)  
           printf("Normal weight\n"); 
    else if(BMI > 25 && BMI <= 30)   
           printf("Over weight\n");
    else                           
           printf("Obese\n");
    return 0;
}