#include <stdio.h>

int main(){
	float a,h;
	printf("Moi ban nhap vao do dai canh day: ");
	scanf("%f", &a);
	printf("Moi ban nhap vao chieu cao cua tam giac: ");
	scanf("%f", &h);
	
	printf("Dien tich cua tam giac tu du lieu tren la: %.2f",(float)1/2*a*h);
	
	return 0;
}
