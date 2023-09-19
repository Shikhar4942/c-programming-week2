#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter marks of phy chem bio maths computer");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	if(f>=90)
	{
		printf("GRADE A");
		
	}
	if(f>=80 && f<90)
	{
		printf("GRADE B");
		
	}
	if(f>=70 && f<80)
	{
		printf("GRADE C");
		
	}
	if(f>=60 && f<70) 
	{
		printf("GRADE D");
		
	}
	if(f>=40 && f<60)
	{
		printf("GRADE E");
		
	}
	if(f<40)
	{
		printf("GRADE F");
		
	}
return 0;
	
}


