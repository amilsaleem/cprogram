#include<stdio.h>
int main()
{
	int a,b,i;
	int s=0;
	printf("enter");
	scanf("%d%d",&a,&b);
	if(b==2)
	{
		b=a*a;
	}
	if(b==3)
	{
		b=a*a*a;
	}
	if(b==4)
	{
		b=a*a*a*a;
	}
	printf("pow =%d",b);
	
}
