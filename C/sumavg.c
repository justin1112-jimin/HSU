#include <stdio.h>

int main(){
	double a, b, c, sum, avg;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &a);
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &b);
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &c);
	
	sum = a+b+c;
	avg = sum/3;
	
	printf("���� %lf�̰� ����� %lf�Դϴ�.", sum, avg); 
}
