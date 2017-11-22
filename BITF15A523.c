#include <stdio.h>
#include <unistd.h>

int main()
{
	int a[100];
	for(int i=0;i<100;i++){
		scanf(a[i]);
	}
	int sum=0,cpid1,cpid2,cpid3;
	
	cpid1=fork();
	cpid2=fork();
	cpid3=fork();
	
	if(cpid3==0)
	{		
		for(int i=0;i<25;i++)
		{
		sum=sum+a[i];
		}
	}
	if(cpid2==0)
	{
		for(int i=25;i<50;i++)
		{
			sum=sum+a[i];	
		}
	}
	if(cpid1==0)
	{
		for(int i=50;i<75;i++)
		{
			sum=sum+a[i];
		}
	}
	if(cpid1>0)
	{
		for(int i=75;i<100;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum,"\n"); 
	}	
	return 0;
}