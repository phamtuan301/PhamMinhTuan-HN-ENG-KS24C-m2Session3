#include <stdio.h>
int main(){
	float bankinh;
	float chuvi;
	float dientich;
	printf("moi ban nhap ban kinh: ");
	scanf("%f", &bankinh);
	chuvi = bankinh * 2 * 3.14;
	dientich = bankinh * bankinh * 3.14;
	printf("chu vi hinh tron la: %.2f\n", chuvi);
	printf("dien tich hinh tron la: %.2f", dientich);
	return 0;
}