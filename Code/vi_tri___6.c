#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j,a[155],d[155];
	scanf("%d",&n);
	for(i=0;i<=n;i++) d[i]=0;
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=1;i<=n;i++) d[a[i]]++;
	for(i=1;i<=n;i++)
	{
		if(d[a[i]]==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
