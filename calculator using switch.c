#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,result;
	char c;
	printf("Enter your choice operators(+,-,*,/)");
	scanf("%c",&c);
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	switch(c)
	{
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
	}
	printf("%d",result);
	return 0;
	
}
