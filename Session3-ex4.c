#include <stdio.h>
int main(){
	float diemtoan;
	float diemvan;
	float diemanh;
	float sum;
	float average;
	printf("moi ban nhap diem Toan: ");
	scanf("%f", &diemtoan);
	printf("moi ban nhap diem Van: ");
	scanf("%f", &diemvan);
	printf("moi ban nhap diem Anh: ");
	scanf("%f", &diemanh);
	sum = diemtoan + diemvan + diemanh;
	average = sum / 3;
	printf("Tong diem 3 mon la: %.2f\n", sum);
	printf("Trung binh cong 3 mon la: %.2f", average);
	return 0;
}