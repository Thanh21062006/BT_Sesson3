#include <stdio.h>

int main(){
	float celsius, fahrenheit;
	printf("Moi ban nhap vao do celsius: ");
	scanf("%f", &celsius);
	fahrenheit = celsius*(float)1.8+32;
	printf("Vay, %.2f do celsius bang %.2f do fahrenheit",celsius,fahrenheit);
	
	return 0;
}


