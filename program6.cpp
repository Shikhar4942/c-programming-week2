#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three no.s");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
	{
		printf("%d",a);
	}
	else if(b>a && a>c)
	{
		printf("%d",b);
		
	}
	else
	{
		printf("%d",c);
		
	}
	return 0;
	
}
