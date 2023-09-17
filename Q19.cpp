#include<stdio.h>
#include<conio.h>
int main()
{
	float height,weight;
	
	printf("enter the value ");
	scanf("%f %f",&height,&weight);
	float n1 = 0.393701 , n2 = 2.20462;  //n1 is for height in cm to inches,n2 is bfor weight in kg into pounds//
	 
	height =(height*n1);
	 weight=(weight*n2);
	 
	 printf("height %f",height);
	  printf("weight %f",weight);
	  return 0;
}
