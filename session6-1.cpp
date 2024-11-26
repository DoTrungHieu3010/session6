#include<stdio.h>
int main(){
	int num, sum;
	for (int i=1;i<=5;i++){
		printf("Nhap so nguyen thu %d: ", i);
		scanf("%d", &num);
		if (num % 2 != 0){
		sum += num;
	   }
	}
		printf("Tong cua cac so le la: %d", sum);
	return 0;
}
