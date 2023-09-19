#include<stdio.h>
/* 1to 100 units rs 2
101 to 200 units rs 3.5
201+ units rs 5*/
int main()
{
	float a,b;
	printf("enter units of electricity used");
	scanf("%f",&a);
	if(a<=100)
	{
		b=a*2;
		printf("eletricity bill is %f",b);
		
		
	}
	else if(a>100)
	{
	
	b=200+(a-100)*3.5;
	prinf("bill is %f",b);
}
    else 
    {
	
    b=200+350+(a-200)*5;
    printf("bill is %f",b);
}
return 0;
	
}
