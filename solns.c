/* Enter your solutions in this file */
#include <stdio.h>

 int max(int a[], int n)
{
	int sol=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>sol)
		{
			sol=a[i];
		}
	}
	
	return sol;
}

int min(int a[], int n)
{
	int ans=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<ans)
		{
			ans=a[i];
		}
	}
	
	return ans;
}

float average(int a[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	
	return sum/(float)n;
}

int mode(int a[], int n)
{
	int mode=0,max=0;
	if(n==1)
	{
	return a[0];
	}
	
	for(int i=0;i<n;i++)
	{	int count =0;
		for(int j=i+1;j<n;j++)
		{
		
			if(a[i]==a[j])
			{
				count++;
			}
		}
		
		if(count>max)
		{
			max=count;
			mode=a[i];
		}
	}
	
	return mode;
}

int factors(int n, int a[])
{
	int count=0;
	for(int i=0;i<100;i++)
	{       if (n>1) {
		for(int j=2;j<=100;j++)
		{       
			if(n%j==0)
			{
				a[i]=j;
				count++;
				n=n/j;
				break;
			}
		}
		}
	 else 
	 {
		break;	 
	 }
	}
	
	return count;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
