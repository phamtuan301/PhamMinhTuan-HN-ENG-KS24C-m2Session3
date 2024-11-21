#include <stdio.h>
int main(){
	float canh;
	float h;
	float dientich;
	printf("moi ban nhap do dai canh: ");
	scanf("%f", &canh);
	printf("moi ban nhap chieu cao: ");
	scanf("%f", &h);
	dientich = h * canh /2;
	printf("dien tich tam giac la: %f", dientich);
	return 0;
}