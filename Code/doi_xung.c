#include <stdio.h>
#include <string.h>
int doixung(char s[])
{
	int j;
 	int size=strlen(s);
 	for(j=0;j<=size/2;j++)
   	{
    if(s[j]!=s[size-1-j]) return 0;
   	}
 	return 1;         //thuc_hanh_doi_xung
}
int main()
{
 int n,i;
 scanf("%d",&n);
 char s[1000],t[1000];
 t[0]='\0';
 for (i=0;i<n;i++)
  {
   //fflush(stdin); ==>> 
   //gets(s);
   scanf("%s", s);
   if(doixung(s)){strcat(t,s); strcat(t,"\n");}
   s[0]='\0';
  }
 printf("%s",t);
 return 0;
}
