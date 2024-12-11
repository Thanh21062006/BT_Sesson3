#include <stdio.h>

int main(){
	float PI = 3.14,r;
	printf("Moi ban nhap vao ban kinh r: ");
	scanf("%f", &r);
	
	printf("Chu vi hinh tron = %.2f\n",(2*PI)*r);
	printf("Dien tich hinh tron = %.2f\n",PI*(r*r));
	
	return 0;
}
