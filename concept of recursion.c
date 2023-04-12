#include<stdio.h>
int m1();
int main()
{
	int n,f;
	printf("Enter the Number ");
	sacnf("%d",&n);
	f=m1(n);
	printf("Factorial is=%d",f);
}
int m1(int n)
{ 
	if(n<=1)
	return 1;
	else
	return n*m1(n-1);
}
