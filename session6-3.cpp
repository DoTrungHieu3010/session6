#include<stdio.h>
int main(){
	int mk, as;
	mk = 123456;
	do {
		printf("Moi ban nhap dung mat khau: ");
		scanf("%d", &as);
	}while(as != mk);
	printf("Ban da nhap dung!");
	return 0;
}
