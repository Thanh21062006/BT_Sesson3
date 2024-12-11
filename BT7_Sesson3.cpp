#include <stdio.h>

int main (){
	int number,sum;
	printf ("Moi ban nhap vao so co 4 chu so: ");
	scanf("%d", &number);
	if(number >= 1000 && number<=9999){
		while(number>0){
			sum += (number % 10);
			number /= 10;
		}
	printf("Tong cac so ban vua nhap la: %d",sum);
	}
	else
		printf("so ban vua nhap khong hop le!!");
	
	return 0;
	
	
}
