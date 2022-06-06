#include<stdio.h>
#include<Math.h>

class phuongtrinh{
public:
	int a=3;
	int b=-6;
	int c=2;
	float x1;
	float x2;
	void giai();
	
};

int main() {
	phuongtrinh a;
	a.giai();

}

void phuongtrinh::giai() {

	float delta = b ^ 2 - 4 * a * c;
	if (delta > 0) {
		x1 = (float)(-b + sqrt(delta) / 2 * a);
		x2 =(float) (-b - sqrt(delta) / 2 * a);

		printf(" phuong trinh co nghiem x1: %0.2f \r\n",x1);
		printf(" phuong trinh co nghiem x2: %0.2f \r\n",x2);
	}
	else if (delta == 0) {
		x1 = x2 =(float)( -b / (2 * a));
		printf(" nghiem kep x1 x2 %0.2f,%0.2f\r\n", x1, x2);
	}
	else {
		printf("phuong trinh vo nghiem\r\n");
	}

}