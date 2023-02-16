#include <stdio.h>
#include <math.h>
int main()
{
	float X,Y,F;
	printf("Nhap gia tri cua X : "),scanf("%f",&X);
	printf("Nhap gia tri cua Y : "),scanf("%f",&Y);
	F = pow(Y,6)+X*pow(Y,5)+pow(X,2)*pow(Y,4)+pow(X,3)*pow(Y,3)+pow(X,4)*pow(Y,2)+pow(X,5)*Y+pow(X,6);
	printf("Ket qua F = %.2f",F);
	return 0;
}
