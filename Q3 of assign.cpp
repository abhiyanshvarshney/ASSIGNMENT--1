/*Mr. X goes to market for buying some fruits and vegetables. He is having a currency of Rs 500 with him for marketing.
 From a shop, he purchases 2.0 kg Apple priced Rs. 50.0 per kg, 1.5 kg Mango priced Rs.35.0 per kg,
  2.5 kg Potato priced Rs.10.0 per kg, and 1.0 kg Tomato priced Rs.15 per kg. He gives the currency of Rs. 500 to the shopkeeper.
 Find out the amount shopkeeper will return to X by writing a C program*/
 
 #include<stdio.h>
 #include<conio.h>
 
int main()
{
	int total=500;
	int a_p=50,m_p=35,p_p=10,t_p=15;        // price per KG//
	float r_back;
	 r_back=total-(a_p*2+m_p*1.5+p_p*2.5+t_p*1);
	 
	 printf("the amount shopkeeper return is %f",r_back);
	 
	 return 0;
}
