#include <stdio.h>

int main(){
	double a, b, c, sum, avg;
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &a);
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &b);
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &c);
	
	sum = a+b+c;
	avg = sum/3;
	
	printf("합은 %lf이고 평균은 %lf입니다.", sum, avg); 
}
