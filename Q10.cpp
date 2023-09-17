#include<stdio.h>
#include<conio.h>
int main()
{
	float population=30000;
	float first_year=20;  // percentage increase on first year//
	float second_year=30; // percentage increase on second year//
	 
	 population=population+(first_year*30000/100);
	 population=population+(second_year*population/100);
	 
	 printf("total population is %f",population);
	 return 0;
	 
}
