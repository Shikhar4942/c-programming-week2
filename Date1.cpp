#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter any date");
	scanf("%d %d %d",&d,&m,&y);
		if((m==1||m==3||m==5||m==7||m==8||m==10||m==12 &&(d<=31 && d>0)) || (m==2 && (d<=29 && d>0) &&y%4==0 && (y%400==0 || y%100!=0)) ||(m==4||m==6||m==9||m==11 &&(d<=30 &&d>0))||(m==2 &&(d<=28 &&d>0)))
	
		
{
	
	if(y%4==0 && (y%400==0 || y%100!=0))
	{
			if(m==1||m==3||m==5||m==7||m==8||m==10 && d==31)
			
		{
			d=1;
			m=m+1;
			y=y;
		}
		else if(m==12 && d==31)
		{
				d=1;
			m=1;
			y=y+1;
			
		}
		else if(m==2 && d==29)
		{
			d=1;
			m=3;
			y=y;
			
		}
		else
		{
			d=d+1;
			m=m;
			y=y;
		}
		printf("%d %d %d",d,m,y);
	}
		else
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10 && d==31)
			
		{
			d=1;
			m=m+1;
			y=y;
		}
		else if(m==12 && d==31)
		{
				d=1;
			m=1;
			y=y+1;
			
		}
		else if(m==2 && d==28)
		{
			d=1;
			m=3;
			y=y;
			
		}
		else{
			d=d+1;
			m=m;
			y=y;
		}
		printf("%d %d %d",d,m,y);
	}
			
			
		
	}
	else
	printf("invalid date");
	return 0;
	
}
