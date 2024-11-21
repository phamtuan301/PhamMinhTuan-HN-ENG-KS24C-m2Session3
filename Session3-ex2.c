#include <stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("moi ban nhap nhiet do theo do celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsius * 1.8 + 32;
	printf("%f do C bang %f do F", celsius, fahrenheit);
	return 0;
}