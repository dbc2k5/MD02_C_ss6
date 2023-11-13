#include<stdio.h>
int main(){
	int number;
	printf("Nhap so nguyen tu 1 den 9: ");
	scanf("%d",&number);
	printf("Bang cuu chuong cua %d la: \n",number);
	for(int i=1;i<10;i++){
		printf("%d x %d = %d \n",number,i,number*i);
	}
}
