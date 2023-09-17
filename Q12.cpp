#include<stdio.h>
#include<conio.h>
int main()
{
	float basicpay,hra,ta,salary;
	printf("enter the basic pay:");
	scanf("%f",&basicpay);
	
	hra=(15*basicpay/100);
	ta=(20*basicpay/100);
	
	salary=hra+ta+basicpay;
	printf("salary is %.2f",salary);
	return 0;
	
	
}
