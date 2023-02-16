#include <stdio.h>
int main ()
{
	int n,i;
	scanf("%d",&n);
	int k=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		k++;
	}
	if(n!=1 && 	k==2)
	{
		printf("La so nguyen to");
	}else
	{
		printf("Khong phai so nguyen to");
	}
	return 0;
	
}
