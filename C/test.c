#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	
	if(a == 12 || a ==  1 || a == 2){
		printf("winter");
	}
	else if(a == 3 || a == 4 || a == 5){
		printf("spring");
	}
	return 0;
}
