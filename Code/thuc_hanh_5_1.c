#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n<=0)
	{
		printf("Error");
	}else 
	{
		for(i=(n-1);i>=0;i--)
		{
			printf("%d",a[i]);
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		printf("\n%d",sum);
	}
	return 0;
	
}
