#include<stdio.h>
#include<math.h>

int main()
{
	long int t,eti,med1,med2,med3,med4,med5;
	long long int Bfyr;
	
	Bfyr = (t+eti)/3600;
	med1= Bfyr/24;
	med2= med1/365.25;
	med3= med2+2000;
	//printf("the value is %ld",med3);
	return 0;
}
	
