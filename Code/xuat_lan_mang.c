#include <stdio.h>
#include <conio.h>

int main()         // xuat lan cua moi mang 
{
	int n,i,j,c=0;
	scanf("%d",&n);
	if(n>=100) printf("ERROR");
	int a[n];
	int b[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	
		c=1;
		if(a[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;
				}
			}
			b[i]=c;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		printf("%d %d\n",a[i],b[i]);
	}
	return 0;
}
