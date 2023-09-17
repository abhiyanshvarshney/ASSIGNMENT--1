/*Write a C program to print your name, date of birth and mobile number in 3 different lines.*/
#include<stdio.h>
#include<conio.h>
int main()
{
  char a= 'A',b='B',c='H',d='I';
   long dob_d= 29;
   long  m=10;
   long  y=2005;
  long long mobile_no=9012358959;
  
  printf("\n%c%c%c%c",a,b,c,d);
   printf("\n %lu/%lu/%lu",dob_d,m, y);
    printf("\n %llu",mobile_no);
	
	return 0;
	
}

