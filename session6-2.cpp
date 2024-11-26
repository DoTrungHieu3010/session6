#include<stdio.h>
int main(){
	int chan, le, num;
	chan = 0;
	le = 0;
	for (int i=1;i<=5;i++){
		printf("Nhap so nguyen thu %d: ", i);
		scanf("%d", &num);
		if (num%2==0){
			chan++;
		} else {
			le++;
		}
	}
	printf("So luong so chan la: %d \n", chan);
	printf("So luong so le la: %d \n", le);
	return 0;
}
