#include <stdio.h>
//wap to find the bmi value
int main()
{
	float height,weight,bmi;
	printf("enter your weight");
	scanf("%f",&weight);
	printf("Enter your height");
	scanf("%f",&height);
	bmi=weight/(height*height);
	printf("Your bmi value is %f\n", bmi);
	return 0; 
	
} 
