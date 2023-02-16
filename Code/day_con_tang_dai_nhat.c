#include <stdio.h>
int main()
{
	int n,i,dem=0,k[100000];
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);    //day con tang dai nhat
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		k[dem]++;
		else
		dem++;
	}
	int max=k[0];
	for(i=0;i<dem;i++)
	{
		if(k[i]>max) max=k[i];
	}
	printf("%d",max+1);
}
