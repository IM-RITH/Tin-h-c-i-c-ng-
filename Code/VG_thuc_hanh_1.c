#include<stdio.h>
int main()
{
 int n,s,i,j;
 int dem=0;
 scanf("%d %d",&n,&s);
 int a[n];
 if(2>n||n>10000||s>100000||s<-100000) printf("ERROR");
 else
 {
 	int dem1=0;
  	for(i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]>10000) dem1=dem1+1;if(a[i]>10000) break;}
  	if(dem1!=0) printf("ERROR");
  	else
  	{
  		for(i=0;i<n;i++)
  		{
   			for(j=0;j<n;j++)
			{
    			if(a[i]+a[j]==s&&i!=j) dem=dem+1;
   			}
  		}
 		printf("%d",dem/2);
 	}
 }
}
 
