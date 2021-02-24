#include<stdio.h>

int prime(int n);

int prime(int n)
{
	int i, c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
		return 1;
	else
		return 0;
}

int main()
{
	int x,res;
	printf("Enter any number.\n");
	scanf("%d", &x);
	
	res=prime(x);
	
	if(res==1)
		printf("It is a Prime number");
}
