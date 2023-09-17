#include<stdio.h>
#include<conio.h>
int main()
{
	int r_n=142501115,l_d=0,sum=0;
	
	l_d=r_n%10000;
	while (l_d>0)
	{
		sum+=l_d%10;
		l_d/=10;
		
	}
	printf("sum of the last digit is %d",sum);
	return 0;
	
}
