#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three no.s");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("the no.s %d %d %d are equal",a,b,c);
		
	}
	else
	printf("the no.s are not equal");
	return 0;
	
}
