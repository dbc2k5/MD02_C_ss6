#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c, sum, avg;
	printf("Nhap vao 3 so nguyen: \n");
	scanf("%d %d %d", &a, &b, &c);
	do{
		printf("CACULATOR\n");
		printf("1. Tong 3 so nguyen\n");
		printf("2. Trung binh cong 3 so nguyen\n");
		printf("3. So lon nhat, nho nhat trong 3 so\n");
		printf("4. Thoat\n");
		printf("Nhap lua chon cua ban:");
		int choice; scanf("%d", &choice);
		switch(choice){
			case 1:
				sum = a + b + c;
				printf("Tong 3 so nguyen la: %d\n",sum);
				break;
			case 2:
				avg = sum / 3;
				printf("Trung binh cong 3 so nguyen la: %d\n",avg);
				break;
			case 3:
				if(a > b && a > c) {
                    printf("So lon nhat la: %d\n", a);
                } else if(b > a && b > c) {
                    printf("So lon nhat la: %d\n", b);
                } else {
                    printf("So lon nhat la: %d\n", c);
                }
                if(a < b && a < c) {
                    printf("So nho nhat la: %d\n", a);
                } else if(b < a && b < c) {
                    printf("So nho nhat la: %d\n", b);
                } else {
                    printf("So nho nhat la: %d\n", c);
                }
                break;
            case 4:
            	printf("Thoat \n");
            	break;
            default: 
                printf("Chon tu 1 den 4 !!");
        }
	}while("Chon tu 1 den 4");
}
