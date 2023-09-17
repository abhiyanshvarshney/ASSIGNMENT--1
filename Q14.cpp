#include<stdio.h>
#include<conio.h>
int main()
{
	int k=5;
	float grade;
	float credit;
	float spi=0;
	
	for (int i=0;i<k;i++)
	{
		printf("enter the value of grade;",i+1);
		scanf("%f",&grade);
		printf("enter the value of credit;",i+1);
		scanf("%f",&credit);
	}
	spi+=(grade*credit);
	spi/=k;
	printf("SPI:%.2f",spi);
	
	return 0;
}
