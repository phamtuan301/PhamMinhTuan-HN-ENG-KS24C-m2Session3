#include <stdio.h>
int main(){
	int n, a, b, c, d, sum;
	printf("moi ban nhap so co 4 chu so: ");
	scanf("%d", &n);
	a = n / 1000;
	b = (n - a * 1000) / 100;
	c = (n - a * 1000 - b * 100)/ 10;
	d = (n - a *1000 - b * 100 - c * 10) % 10;
	sum = a + b + c + d;
	printf("tong cac chu so cua %d la: %d", n, sum);
	
	
	return 0;
}