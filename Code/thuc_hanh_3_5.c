#include <stdio.h>
#include <math.h>
int main()
{
	double x,y,z,F;
	printf("Nhap x : "),scanf("%lf",&x);
	printf("Nhap y : "),scanf("%lf",&y);
	printf("Nhap z : "),scanf("%lf",&z);
	F = ((x+y+z)/(pow(x,2)+pow(y,2)+1))-fabs(x-z*cos(y));
	printf("Ket qua F = %lf",F);
	return 0;
	
}
