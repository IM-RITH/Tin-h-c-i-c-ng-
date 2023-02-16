#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	float r,M,S;
	printf("Nhap gia tri r : ");
	scanf("%f",&r);
	if(r>0)
	{
		M=2*PI*r;
		S=PI*r*r;
		printf("Chu vi M = %.2f va dien tich S = %.2f",M,S);
		//printf("Dien tich S = %.2f",S);
	}else
	{
		printf("ERROR");
	}
	return 0;
}
