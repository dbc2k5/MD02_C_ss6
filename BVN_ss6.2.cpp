#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    do{
        printf("CACULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        int choice; scanf("%d", &choice);
        int sum,sig,acc,quot,rem;
        switch(choice){
            case 1:
                sum = a + b;
                printf("Tong 2 so la: %d\n",sum);
                break;
            case 2:
                 sig = a - b;
                printf("Hieu 2 so la: %d\n", sig);
                break;
            case 3:
                acc = a * b;
                printf("Tich 2 so la: %d\n", acc);
                break;
            case 4:
                quot = a / b;
                printf("Thuong 2 so la: %d\n", quot);
                break;
            case 5:
                rem = a % b;
                printf("So du trong phep chia 2 so la: %d\n", rem);
                break;
            case 6:
                int UCLN;
				for(int i = 1 ; i <= a || i <= b ; i++){
					if(a % i == 0 && b % i == 0){
						UCLN = i;
					}
				}
				printf("UCLN la %d \n",UCLN);
                break;
            case 7:
                printf("BCNN la %d \n", (a*b)/UCLN);
				break;
            case 8:
            	printf("Thoat \n");
            	break;
                exit(0);
            default: 
                printf("Lua chon khong hop le. Vui long chon 1 den 8 \n");
        }
    } while("Chon 1 den 8");

}
