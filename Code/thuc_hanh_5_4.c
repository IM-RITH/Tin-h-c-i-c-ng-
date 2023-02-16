#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	scanf("%s",&s);
	int n,i;
	scanf("%d",&n);
	if(strlen(s)>=n)
	{
		for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
	}else
	{
		printf("%s",s);
	}
	return 0;
}
