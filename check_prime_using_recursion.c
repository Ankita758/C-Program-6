#include<stdio.h>
int isPrime(int);
int i;
int main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	i=n/2;
	result=isPrime(n);
	if(result==1)
	{
		printf("%d is a prime number",n);
	}
	if(result==0)
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}
int isPrime(int num)
{
	if(i==1)
		return 1;
	else if(num%i==0)
		return 0;
	else
	{
		i=i-1;
		isPrime(num);
	}
}
