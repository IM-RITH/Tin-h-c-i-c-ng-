#include <stdio.h>

int main()
{
	int a,b,A,B;
	scanf("%d %d",&a,&b);
	if(a<=0 || b<=0)
	printf("ERROR");
	else 
	{
		A=a,B=b;
		while(a!=b)
		{
			if(a>b)
			a-=b;
			if(a<b)
			b-=a;
		}
		printf("%d\n%d",a,A*B/a);
	}
	return 0;
}
