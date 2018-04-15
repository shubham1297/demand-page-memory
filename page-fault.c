#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,p,m,M,N,eff_access_time;
	printf("enter the no. of replaced page not modified=");
	scanf("%f",&x);
	printf("enter the no. of replaced  page  modified=");
	scanf("%f",&y);
	printf("enter the memory access time=");
	scanf("%f",&z);
	printf("percentage of page is to be replaced is modified=");
	scanf("%f",&m);
	printf("enter the effective access time");
	scanf("%f",&eff_access_time);
	if(eff_access_time<=200)
	{
		x=x*1000000;
		y=y*1000000;
     	M=m*0.01;
    	N=1-M;	
 		p=((eff_access_time-z))/((M*y)+(N*x)-z);
		printf("maximum acceptable page fault rate=%f",p);
		
	}

else
{
printf("maximum acceptable page fault rate for an effective access time is not more than 200 ns");
}
}
