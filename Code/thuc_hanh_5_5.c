#include <stdio.h>
#include <string.h>
void A(char mang[], int n)
{
	int temp,i,j;
	char mang1[1000];
	int b=1;
	mang1[0]=mang[0];
	for(i=0;i<n;i++)
	{
		int dem=0;
		for(j=0;j<b;j++)
		{
			if(mang[i]==mang1[j])
			dem++;
		}
		if(dem==0)
		{
			mang1[b]=mang[i];
			b++;
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(mang1[i]>mang1[j])
			{
				temp=mang1[i];
				mang1[i]=mang1[j];
				mang1[j]=temp;
			}
		}
	}
	printf("%s\n",mang1);
	for(j=0;j<b;j++)
	{
		int c=0;
		for(i=0;i<n;i++)
		{
			if(mang1[j]==mang[i])
			{
				c++;
			}
		}
		printf("%d\n",c);
	}
}
int main()
{
	char x1[1000];
	char x2[1000];
	gets(x1);
	gets(x2);
	char xau_TT[1000];
	int bienDem=0;
	int i,j;
	for(i=0;i<strlen(x1);i++)
	{
		xau_TT[i]=x1[i];
	}
	for(j=0;j<strlen(x2);j++)
	{
		xau_TT[j+strlen(x1)]=x2[j];
	}
	int d=strlen(x1)+strlen(x2);
	A(xau_TT,d);
	return 0;
}
