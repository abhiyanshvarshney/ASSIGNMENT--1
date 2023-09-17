#include<stdio.h>
#include<conio.h>
int main()
{
	long mobilenumber;
	scanf("%lu",&mobilenumber);
 if( mobilenumber>=1000000000 && mobilenumber<=9999999999 )
      { 
        printf("your mobile number is:%lu\n",mobilenumber);
	  }
	  else
	  {
	  	printf("invalid number \n");
	  }
	printf("mobile no is: %lu", mobilenumber);
	return 0;
}
