#include<stdio.h>
#include<conio.h>
int main ()
{
	int w,t,p;
	scanf("%d %d",&w,&t);
	if(t>30)
	{
		p=30*w+(t-30)*2*w;
		printf("%d",p);

	}
	else
	{
		p=w*t;
		printf("%d",p);
		
	}
	return 0;

}
