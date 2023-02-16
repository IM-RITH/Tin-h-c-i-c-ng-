#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b=0,c=0;
	int sumAm=0, sumDuong=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			sumAm+=a[i];
			b++;
		}
		if(a[i]>=0)
		{
			sumDuong+=a[i];
			c++;
		}
	}
	if(b==0)
	{
		printf("Mang khong co so am ");
		printf("%f",(float)sumDuong);
	}
	if(c==0)
	{
		printf("%f ",(float)sumAm/b);
		printf("Mang khong co so duong");
	}
	if(b!=0 && c!=0)
	{
		printf("%f ",(float)sumAm/b);
		printf("%f",(float)sumDuong);
	}
	return 0;
}
