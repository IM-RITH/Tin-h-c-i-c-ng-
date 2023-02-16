#include <stdio.h>
#include <math.h>
double A(int n, double x)
{
	int i;
	double sumA=0;
	for(i=0;i<=n;i++)
	{
		sumA+=pow(x,i);
	}
	return sumA;
}
double B(int n, double x)
{
	int i;
	double sumB=0;
	for(i=0;i<=n;i++)
	{
		sumB+=pow(-1,i)*pow(x,i);
	}
	return sumB;
}
double C(int n, double x)
{
	int i;
	double sumC=1;
	int giai_thua=1;
	for(i=1;i<=n;i++)
	{
		giai_thua*=i;
		sumC+=pow(x,i)/giai_thua;
	}
	return sumC;
}
int main()
{
	int n; 
	scanf("%d",&n);
	double x;
	scanf("%lf",&x);
	if(n>=0)
	{
		printf("%f\n%f\n%f",A(n,x),B(n,x),C(n,x));
	}else
	{
		printf("ERROR");
	}
	return 0;
}












