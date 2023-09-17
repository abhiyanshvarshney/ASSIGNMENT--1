/*Write a C program for calculating the price of a product after adding the sales tax to 
its original price. Where rate of tax and price is inputted by user.*/

#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 	int op,st;
 	printf("enter the value of original price",op);
 	scanf("%d",&op);
 	printf("enter the value of sales tax",st);
 	scanf("%d",&st);
 	
 	int p=op+(st*op/100);
 	printf("price of product is %d ",p);
 	
 	return 0;
 	
 }
