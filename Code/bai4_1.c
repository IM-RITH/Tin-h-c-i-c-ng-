#include <stdio.h>

int main()
{
	int i,n,giai_thua=1;
	scanf("%d",&n);
	if(n<0 || n>7)
	{
		printf("ERROR");
	}else
	{
		for(i=1;i<=n;i++)
			giai_thua*=i;

		printf("%i",giai_thua);
	}

	return 0;
}
