#include <stdio.h>
#include <math.h>
float A(float X, float Y, float b)
{
	return pow(X,b)+pow(Y,b);
}
int main()
{
	float X,Y;
	printf("Nhap X : "),scanf("%f",&X);
	printf("Nhap Y : "),scanf("%f",&Y);
	printf("A = %.2f, B = %.2f, C = %.2f",A(X,Y,2),pow(X+Y,2),pow(X-Y,2));
	return 0;
}
  // Cach 2
int main()
{
	float X,Y,A,B,C;
	printf("Nhap X : "),scanf("%f",&X);
	printf("Nhap Y : "),scanf("%f",&Y);
	A = pow(X,2)+pow(Y,2);
	B = pow(X+Y,2);
	C = pow(X-Y,2);
	printf("A = %.2f, B = %.2f, C = %.2f",A,B,C);
	return 0;
	
	
}
