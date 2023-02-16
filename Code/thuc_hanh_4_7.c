#include <stdio.h>
#include <math.h>
double A(double x, int n)
{
	int i;
	double sumA=0;
	for(i=1;i<=n;i++)
	{
		sumA+=sqrt(sumA+x);
	}
	return sumA;
}
double B(double x, int n)
{
	int i;
	double sumB=1;
	for(i=1;i<=n;i++)
	{
		sumB+=pow(x,i)/i;
	}
	return sumB;
}
double C(double x, int n)
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
double D(double x, int n)
{
	int i;
	double sumD=1;
	int giai_thua=1;
	for(i=1;i<=n;i++)
	{
		giai_thua*=i;
		sumD+=pow(-1,i)*pow(x,i)/giai_thua;
	}
	return sumD;
}
int main()
{
	double x;
	scanf("%lf",&x);
	int n;
	scanf("%d",&n);
	if(n>=1 && x>=0)
	{
		printf("%.4f\n%.4f\n%.4f\n%.4f",A(x,n),B(x,n),C(x,n),D(x,n));
	}else 
	{
		printf("Error");
	}
	return 0;
}
