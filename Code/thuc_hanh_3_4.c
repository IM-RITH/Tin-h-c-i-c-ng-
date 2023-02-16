#include <stdio.h>
int main()
{
	float gia_chua_co_thue, can_nang, thue, tong_gia_tri;
	printf("Nhap gia chua co thue : "),scanf("%f",&gia_chua_co_thue);
	printf("Nhap can : "),scanf("%f",&can_nang);
	printf("Nhap thue : "),scanf("%f",&thue);
	tong_gia_tri = gia_chua_co_thue*can_nang*(1+thue/100); // <== total price + total price*tax/100
	printf("Ket qua = %.2f",tong_gia_tri);
	return 0;
}
