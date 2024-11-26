#include<stdio.h>
int main(){
	int month, year;
	printf("Nhap so nam ban chon: ");
	scanf("%d", &year);
	printf("Nhap so thang ban chon: ");
	scanf("%d", &month);
	if(year%4==0){
		if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		 printf("Thang %d co 31 ngay", month);
	     }
	     else if (month==4||month==6||month==9||month==11){
		 printf("Thang %d co 30 ngay", month);
	     }
	     else if (month==2){
		 printf("Thang 2 co 29 ngay");
	     }
	     else {
		 printf("Thang khong hop le");
	    }
	}  else {
		if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		 printf("Thang %d co 31 ngay", month);
	     }
	     else if (month==4||month==6||month==9||month==11){
		 printf("Thang %d co 30 ngay", month);
	     }
	     else if (month==2){
		 printf("Thang 2 co 29 ngay");
	     }
	     else {
		 printf("Thang khong hop le");
        }
    }
    return 0;
}
