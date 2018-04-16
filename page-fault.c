//Don't copy my code without credit.
//Git-Hub link:-https://github.com/shubham1297/demand-page-memory


#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,m,p,M,N,eff_access_time;
	printf("\nEnter all the value in ns \n");
	printf("\nEnter the no. of replaced page not modified= \n");
	scanf("%f",&x);
	printf("\nEnter the no. of replaced  page  modified=\n");
	scanf("%f",&y);
	printf("\nEnter the memory access time=\n");
	scanf("%f",&z);
	printf("\nPercentage of page is to be replaced is modified=\n");
	scanf("%f",&m);
	printf("\nEnter the effective access time=\n");
	scanf("%f",&eff_access_time);
	if(eff_access_time<=200)
	{
		x=x*1000000;
		y=y*1000000;
     	M=m*0.01;
    	N=1-M;	
 		p=((eff_access_time-z))/((M*y)+(N*x)-z);
 		
		printf("\nMaximum Acceptable page fault rate=%f\n",p);
		
	}

else
{
     printf("!!!ERROR!!!");
     printf("maximum acceptable page fault rate for an effective access time is not more than 200 ns");
}
}

