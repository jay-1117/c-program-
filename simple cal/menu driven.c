#include<stdio.h>

int main()
{
	char n;
	printf("enter the operator +,-,*,/:\n");
	scanf("%c",&n);
    int num1,num2,num3=0;
    printf("enter the two number:\n");
    scanf("%d%d",&num1,&num2);	
	
	
	switch(n)
	{
	
	case '+':
		num3=num1+num2;
		
		break;
		
		case '-':
				num3=num1-num2;
	
		break;
		
		case '*':
				num3=num1*num2;
		
		break;
		
		case '/':
			num3=num1/num2;
		break;
		
		default :
			printf("Operator is incorrect");
		
		
}
printf("%d %c %d = %d",num1,n,num2,num3);
return 0;

}

