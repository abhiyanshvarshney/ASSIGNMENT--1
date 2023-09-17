#include<stdio.h>
#include<conio.h>
int main()
{
	int sau,saj,x;
	scanf("%d %d",&sau,&saj);
	x=sau;
	sau=saj;
	saj=x;
	printf("%d %d",sau,saj);
	return 0;
}
