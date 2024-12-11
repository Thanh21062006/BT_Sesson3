#include <stdio.h>

int main(){
	float maths, literature, english;
	printf("Moi ban nhap vao diem lan luot diem Toan Van Anh?\n");
	scanf("%f %f %f", &maths,&literature,&english);
	printf("Tong diem 3 mon la: %.2f\n",maths+literature+english);
	printf("Diem trung binh la: %.2f\n",(maths+literature+english)/3);
	
	return 0;
}
